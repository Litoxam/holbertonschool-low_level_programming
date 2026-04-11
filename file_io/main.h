#ifndef MAIN_H
#define MAIN_H

/*libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*open*/

#include <fcntl.h>

/*Prototypes*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);







#endif
