//Nash Kleppan
//Vishal Mehta
//Patrick OConnor
//Group 19
//CSE 220 Spring 2014
//  Print.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "common.h"
#include "Token.h"
#include "linkedlist.h"

using namespace std;

class Print
{
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;
    void printPageHeader();
    
public:
    Print(char source_name[], char date[]);
    ~Print();

    void printLine(char line[]);
    void printToken(Token *token);
};

#endif /* defined(__Lab4__Print__) */
