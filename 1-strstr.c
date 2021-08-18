#include <stdio.h>
#include <string.h>
#include "main.h"
 
// Recursive function to implement `strstr()` function
const char* _strstr(const char* X, const char* Y)
{
    if (*Y == '\0') {
        return X;
    }
 
    for (int i = 0; i < strlen(X); i++)
    {
        if (*(X + i) == *Y)
        {
            char* ptr = strstr(X + i + 1, Y + 1);
            return (ptr) ? ptr - 1 : NULL;
        }
    }
 
    return NULL;
}
