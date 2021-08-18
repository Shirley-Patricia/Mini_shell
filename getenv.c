#include "main.h"
extern char **environ;
char *_getenv(const char *name)
{
    int i = 0;
    char *nombre, *var;
    int a = 0;
    a = strlen(name);
    while (environ[i] != NULL)
    {
        strncpy(nombre, environ[i], a);
        nombre[a] = '\0';
       
        if ((strcmp(nombre, name)) == 0)
        {
            var = environ[i];
            if (var[a] == '=')
            {
                return (var);
            }
        }
        i++;
    }
    return (NULL);
}