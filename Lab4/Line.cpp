/*
 * Line.cpp
 *
 *  Created on: Apr 6, 2014
 *      Author: patrick
 */

#include "Line.h"

Line::Line(int line_number)
{
	this->line_number = line_number;
	this->next = 0;
}
Line::~Line()
{

}

int Line::getLineNumber()
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
