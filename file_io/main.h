#ifndef MAIN_H
#define MAIN_H

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* close */
#include <unistd.h>

/* dprintf */
#include <stdio.h>

/* malloc, free */
#include <stdlib.h>

/*function printf*/
int _putchar(char c);
/*task 0*/
ssize_t read_textfile(const char *filename, size_t letters);
/*task 1*/
int create_file(const char *filename, char *text_content);
/*task 2*/
int append_text_to_file(const char *filename, char *text_content);
/*task 3*/

#endif
