//Nash Kleppan
//Vishal Mehta
//Patrick OConnor
//Group 19
//CSE 220 Spring 2014
//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include "common.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
private:
    string tokenString;
    Token *left;
    Token *right;
    Token *previous;
    Line *reservedLine;
    //What variables and methods am I missing to implement a binary tree.
    
public:
    Token();
    ~Token();
    
    void setTokenString(string s);
    string getTokenString();
    
    void setLeftToken(Token *setValue);
    Token* getLeftToken();
    
    void setRightToken(Token *setValue);
    Token* getRightToken();
    
    void setPreviousToken(Token *setValue);
    Token* getPreviousToken();
    
    void setReservedLine(Line *setLine);
    Line* getReservedLine();
};

#endif /* defined(__Lab4__Token__) */
