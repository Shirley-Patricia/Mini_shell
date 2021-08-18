#include "main.h"
/**
 * 
 * 
 */
int main(int ac, char **av)
{
    char *h;
    if (ac < 2)
    {
         printf("Usage: %s g environ ...\n", av[0]);
                return (1);
    }
    /*printf("%s\n", av[1]);*/
    h = _getenv(av[1]);
    if (h == NULL)
        return (1);
    printf("%s\n", h);
    return (0);
}
