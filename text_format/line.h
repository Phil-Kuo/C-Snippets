#ifndef LINE_H
#define LINE_H

/****************************************
 * clear_line: Clears the current line.	*
 ****************************************/
 
void clear_line(void);

/********************************************************
 * add_word: Adds word to the end of the current line.	*
 * 			 If this is not the first word on the line,	*
 * 			 puts one space before word.				*
 ********************************************************/
 
void add_word(const char *word);


int space_remaining(void);

void write_line(void);

void flush_line(void);

#endif
