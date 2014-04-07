/*
 * Line.cpp
 *
 *  Created on: Apr 6, 2014
 *      Author: patrick
 */

#include "Line.h"

Line::Line()
{
	line_number = 0;
	next = 0;
}
Line::~Line()
{

}

int Line::getLine()
{
	return this->line_number;
}

Line* Line::getNextLine()
{
	return this->next;
}

void Line::setLineNumber(int new_line_number)
{
	this->line_number = new_line_number;
}

void Line::setNextLine(Line* next_line)
{
	this->next = next_line;
}


