//Nash Kleppan
//Vishal Mehta
//Patrick OConnor
//Group 19
//CSE 220 Spring 2014
//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()
{
	tokenString = "";
	left = 0;
	right = 0;
	previous = 0;
	reservedLine = 0;
	
	TokenCode = 0;
	type = 0;
	literal = 0;
	//What code do I need here to initialize everything.
}

Token::~Token()
{
	//What code do I need here to free memory
}

void Token::setTokenString(string s)
{
    this->tokenString = s;
}

string Token::getTokenString()
{
    return this->tokenString;
}

void Token::setLeftToken(Token* setValue)
{
	this->left = setValue;
}

Token* Token::getLeftToken()
{
	return this->left;
}

void Token::setRightToken(Token* setValue)
{
	this->right = setValue;
}

Token* Token::getRightToken()
{
	return this->previous;
}

void Token::setPreviousToken(Token* setValue)
{
	this->previous = setValue;
}

Token* Token::getPreviousToken()
{
	return this->previous;
}

void Token::setReservedLine(Line *setLine)
{
	this->reservedLine = setLine;
}

Line* Token::getReservedLine()
{
	return this->reservedLine;
}

void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}

TokenCode Token::getCode()
{
    return this->code;
}

void Token::setType(LiteralType newType)
{
    this->type = newType;
}

LiteralType Token::getType()
{
    return this->type;
}

void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}

int Token::getIntLiteral()
{
    return this->literal.integer;
}

void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}

float Token::getRealLiteral()
{
    return this->literal.real;
}

void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}

string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}

//What methods am I missing to implement a binary tree.
