/*
 * Line.h
 *
 *  Created on: Apr 6, 2014
 *      Author: patrick
 */

#ifndef LINE_H_
#define LINE_H_

class Line
{
private:
    int line_number;
    Line* next;
    int getLine();
    Line* getNextLine();
    void setLineNumber(int new_line_number);
    void setNextLine(Line* next_line);

public:
    Line(int line_number);
    ~Line();

};


#endif /* LINE_H_ */
