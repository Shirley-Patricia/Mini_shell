#include "main.h"
int main(int argc, char *argv[])
{
        struct dirent *de;
        DIR *dr;
        if (argc < 2)
        {
                printf("Usage: %s _which filename ...\n", argv[0]);
                return (1);
        }
        dr = opendir(argv[1]);
        if (dr == NULL)
        {
                printf("Could not open current directory");
                return 0;
        }
        while ((de = readdir(dr)) != NULL)
                printf("%s\n", de->d_name);
        closedir(dr);
        return 0;
}
