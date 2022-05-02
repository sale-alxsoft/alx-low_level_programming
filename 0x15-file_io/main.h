#ifndef FD
#define FD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int _putchar(char *c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
