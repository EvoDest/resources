//  concurrency_example.cpp
//  Description: Demonstrates concurrency methods
//  Created by Luke Ng on 07/02/21.
//  Copyright © 2021 Luke Ng. All rights reserved.

#include <iostream>
#include <chrono>
#include <thread>
#include <future>

using namespace std;

void task01(int seconds)
{
    this_thread::sleep_for(chrono::seconds(seconds));

    cout << "Task 01 Completed" << endl << endl;
}

void task02(int seconds, stop_source s_source)
{
    this_thread::sleep_for(chrono::seconds(seconds));

    stop_token s_token = s_source.get_token();

    if (s_token.stop_requested())
    {
        cout << "Task 02 Interrupted" << endl << endl;
    }
    else
    {
        cout << "Task 02 Completed" << endl << endl;
    }
}

int task03(int seconds)
{
    this_thread::sleep_for(chrono::seconds(seconds));

    cout << "Task 03 Completed" << endl << endl;

    return seconds;
}

int task04(int seconds)
{
    this_thread::sleep_for(chrono::seconds(seconds));

    cout << "Task 04 Completed" << endl << endl;

    return seconds;
}

int main(void)
{
    // Standard Library Thread
    // C++11
    thread thread01(task01, 1);

    thread01.join();

    // Standard Library Thread
    // Automatic Joining
    // Cooperatively Interruptible
    // C++20
    stop_source s_source;

    jthread jthread02(task02, 1, s_source);

	cout << "Main Task Completed" << endl << endl;

    s_source.request_stop();

    // Packaged Task
    // Invocable
    // Returned object accessed through Future
    // C++11
    packaged_task<int(int)> p_task(task03);
    future<int> result03 = p_task.get_future();

    p_task(2);

    cout << "Task 03 Output: " << result03.get() << endl << endl;

    // Asynchronous
    // Managed thread pool
    // Returned object accessed using Future
    // C++11
    future<int> result04 = async(launch::async, task04, 2);

    int output04 = result04.get();

    cout << "Task 04 Output: " << output04 << endl << endl;

    // Standard Library Thread
    // Communicate objects between threads using Promise
    // C++11
    promise<int> promise05;
    future<int> result05 = promise05.get_future();

    thread thread05_producer([&promise05](int seconds)
                             {
                                 promise05.set_value(seconds);
                             }, 2);

    thread05_producer.join();

    thread thread05_consumer([&result05]()
                             {
                                int seconds = result05.get();

                                this_thread::sleep_for(chrono::seconds(seconds));

                                cout << "Task 05 Completed" << endl << endl;

                                cout << "Task 05 Output: " << seconds << endl << endl;
                             });

    thread05_consumer.join();

    return 0;
}
