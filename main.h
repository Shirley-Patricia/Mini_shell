#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>

int args_c(int ac, char **av);
int _strlen(const char *s);
int _strcmp(const char *s1, const char *s2);
const char* _strstr(const char* X, const char* Y);
int main();
char *_getenv(const char *name);
char *_strncpy(char *dest, char *src, int n);
/*int main(int argc, char *argv[]);*/

#endif /*holi*/