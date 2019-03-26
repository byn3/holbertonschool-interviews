#ifndef crack
#define crack

#define LINE_SIZE 32
#define SLIDE_LEFT -5
#define SLIDE_RIGHT 5

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int slide_line(int *line, size_t size, int direction);

#endif
