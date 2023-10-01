/***   p07ex04.c   ***/
/***   ps20      ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char s[])
{
    int len = 0;
    int i;
    int j = 0;
    char tmp[100];
    while (s[len] != '\0')
    {
        ++len;
    }
    for (i = len - 1; i >= 0; i--)
    {
        tmp[j] = s[i];
        ++j;
    }
    tmp[j] = '\0';
    for (i = 0; i < len; i++)
    {
        s[i] = tmp[i];
    }
}

int main()
{
    FILE *fp;
    FILE *fpw;
    char c[32];
    char cw[32];
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
    printf("keyin file name => ");
    gets(cw);
    fpw = fopen(cw, "w");
    if (fpw == NULL)
    {
        printf("can't open a file\n");
        return 1;
    }
    while (fgets(textbuffer, 512, fp) != NULL)
    {
        // remove \n
        textbuffer[strlen(textbuffer) - 1] = '\0';
        reverseString(textbuffer);
        // add \n
        textbuffer[strlen(textbuffer)] = '\n';
        textbuffer[strlen(textbuffer)] = '\0';
        fputs(textbuffer, fpw);
    }
    fclose(fp);
    fclose(fpw);
    return 0;
}

/*** 結果 ***

>h.oidts< edulcni#

)(niam tni
{
;)"n\?uoy era woH .olleH"(ftnirp
;)"n\?uoY dnA .sknaht ,eniF"(ftnirp
;)"n\.os oS"(ftnirp
;0 nruter



*************/
