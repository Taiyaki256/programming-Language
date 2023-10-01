/***   p07ex03.c   ***/
/***   ps20      ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char c[32];
    int line = 0;
    int character = 0;
    char textbuffer[512];
    printf("keyin file name => ");
    gets(c);
    fp = fopen(c, "r");
    if (fp == NULL)
    {
        printf("can't open a file\n");
        return 1;
    }
    while (fgets(textbuffer, 512, fp) != NULL)
    {
        line++;
        character += strlen(textbuffer);
    }
    fclose(fp);
    printf("The file [%s] has %d lines and %d characters.\n", c, line, character);
    return 0;
}

/*** 結果 ***

keyin file name =>p07ex03A.txt
The file [p07ex03A.txt] has 5 lines and 155 characters.

keyin file name =>p07ex03B.txt
The file [p07ex03B.txt] has 5 lines and 154 characters.

*************/
