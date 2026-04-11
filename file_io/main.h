#ifndef MAIN_H
#define MAIN_H

/*libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*open*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*Prototypes*/

ssize_t read_textfile(const char *filename, size_t letters);







#endif 