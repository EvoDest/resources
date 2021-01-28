//  fileio_example.cpp
//  Description: Demonstrates the use of file input and file output streams
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>
#include <fstream> // include fstream library

using namespace std;

int main(void)
{
    int num;
    cout<<"How many lines of text? (1-10): ";
    cin>>num;
    
    //----------------------------------
    //write to file
    
    string someText="Hello There";
    
    ofstream outfile ("someFile.txt");
    // Where is this file created?
    // What happens if the file already exists?
    // Will the old content be erased?
    
    if(outfile.is_open()) // why wrap the operation in an if-else block?
    {
        for(int i=0; i<num; i++)
        {
            outfile<<someText+'\n'; // write text followed by '\n'
        }
        outfile.close(); //close file once work is complete (why?)
        
        cout<<"Written to file."<<endl;
    }
    else
    {
        cout<<"Error Writing to File";
    }
    
    cout<<endl; //new line
    
    //----------------------------------
    // read from file
    
    string lineOfText;
    
    cout<<"File Contains: "<<endl;
    
    ifstream infile ("someFile.txt");
    
    if(infile.is_open()) // why wrap the operation in an if-else block?
       {
           while(!infile.eof()) // what does this do?
           {
               getline(infile,lineOfText);
               
               cout<<lineOfText<<endl;
           }
           infile.close(); //close file once work is complete (why?)
       }
       else
       {
           cout<<"Error Reading From File";
       }
    
    return 0;
} // end of main program block



