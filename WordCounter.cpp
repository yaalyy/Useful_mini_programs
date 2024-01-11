//
//  WordCounter.cpp
//
//  Created by ARCK on 2020/7/30.
//  Copyright © 2024 Connor Zhan. All rights reserved.
//
#include<iostream>


void countWords(const std::string& text, int& wordCount, int& charCount)
{
    bool inWord = false;
    
    for(char c: text)
    {
        charCount++;
        
        if(std::isspace(c))
        {
            inWord = false;
        }
        else if(!inWord && (std::isalnum(c)))
        {
            inWord = true;
            wordCount++;
        }
        

    }
}


int main()
{

    int wordCount = 0;
    int charCount = 0;

    std::string text;
    
    std::cout << "Just input sentences(press Ctrl+D to finish):" << std::endl;
    while(getline(std::cin,text))
    {
        countWords(text,wordCount,charCount);
    }
    
    
    std::cout << "Word count: " << wordCount << std::endl;
    std::cout << "Char count: " << charCount << std::endl;

    return 0;
    
}

