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
     //values for tree
    Token *left;
    Token *right;
    Token *previous;
    Line *reservedLine;
    
    string tokenString;
    
    TokenCode code; //values for Token
    LiteralType type;
    union
    {
        int integer;
        float real;
        char *stringLiteral;
    }
    literal;
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
    
     void setCode(TokenCode newCode);
    TokenCode getCode();
    
    void setType(LiteralType newType);
    LiteralType getType();
    
    void setLiteral(int newInteger);
    int getIntLiteral();
    
    void setLiteral(float newReal);
    float getRealLiteral();
    
    void setLiteral(string newString);
    string getStringLiteral();
};

#endif /* defined(__Lab4__Token__) */
