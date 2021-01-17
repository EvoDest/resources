//  ConsoleGame.cpp
//  Description: Implementation of the ConsoleGame class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "ConsoleGame.h"

ConsoleGame::ConsoleGame(){}

ConsoleGame::~ConsoleGame(){}

void ConsoleGame::run()
{
    while(true)
    {
        screen.showStartScreen();
        screen.showHiScore(highScores);
        sleep(2);
        
        while (ROUNDS>0) //inner loop
        {
            screen.showCurrScore();
            if(COUNTER%5==0)
            {
                screen.showCoinAbove();
                processor.reset(POSITION,2);
            }
            else if(COUNTER%2==1) //odd
            {
                screen.showCoinLeft();
                 processor.reset(POSITION,1);
            }
            else if (COUNTER%2==0) //even
            {
                screen.showCoinRight();
                processor.reset(POSITION,3);
            }
            
            cin>>USER_INPUT;
            
            if (POSITION==USER_INPUT)
            {
                if(POSITION==2)
                {
                    screen.takeCoinAbove();
                    processor.increment(CURR_SCORE);
                }
                else if(POSITION==1)
                {
                    screen.takeCoinLeft();
                    processor.increment(CURR_SCORE);
                }
                else if(POSITION==3)
                {
                    screen.takeCoinRight();
                    processor.increment(CURR_SCORE);
                }
            }
            else
            {
                if(USER_INPUT==2)
                {
                    screen.noCoinAbove();
                }
                else if(USER_INPUT==1)
                {
                    screen.noCoinLeft();
                }
                else if(USER_INPUT==3)
                {
                    screen.noCoinRight();
                }
            }
            
            processor.increment(COUNTER);
            processor.decrement(ROUNDS);
            sleep(1);
        }//End inner loop
            
        screen.showGameOver();
        screen.showEnterNickName();
        
        Data newRecord;
        newRecord.set(NICKNAME,CURR_SCORE);
        processor.addnSort(highScores,newRecord);
        
        processor.reset(COUNTER,0);
        processor.reset(ROUNDS,10);
        processor.reset(CURR_SCORE,0);
        
    }//End outer loop
    
}
