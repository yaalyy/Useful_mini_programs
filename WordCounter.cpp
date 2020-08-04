//
//  main.cpp
//  WordCounter
//
//  Created by ARCK on 2020/7/30.
//  Copyright © 2020 Connor Zhan. All rights reserved.
//
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>

using namespace std;

string text;
int counter = 0,item = 0;

int dddc(string wz)
{

    int t=1;

    for(int i=0;i>-1;i++)

    {

        if (wz[i]==' ') t++;

        else if(wz[i]=='\0') break;

    }

    return t;

}

int main()
{
    cout<<"Just input the sentences:"<<endl;
    getline(cin,text);
    
    
    while(text[item] == ' ')   //ignore space
    {
        item+=1;
    }
    counter = dddc(text);
    
    
    cout<<endl;
    cout<<"The counter is "<<counter<<endl;
    
    return 0;
    
}

