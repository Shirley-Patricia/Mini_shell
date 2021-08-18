#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>

int args_c(int ac, char **av);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
const char* _strstr(const char* X, const char* Y);
int main();
char *_getenv(const char *name);
/*int main(int argc, char *argv[]);*/

#endif /*holi*/