/***   p07ex05.c   ***/
/***   ps20      ***/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char fname[256];
    FILE *fp;
    char ofname[256];
    FILE *ofp;
    int ch, oldch = 0;
    int NowInWord = 0;
    int count = 0;
    printf("input file name : ");
    gets(fname);
    printf("output file name : ");
    gets(ofname);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("can't open %s\n", fname);
        exit(1);
    }
    ofp = fopen(ofname, "w");
    if (ofp == NULL)
    {
        printf("can't open a file\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (NowInWord == 1)
        {
            if (isalnum(ch) || ch == '_')
            {
                // putchar(ch);
                fprintf(ofp, "%c", ch);
            }
            else
            {
                NowInWord = 0;
                count++;
                if (count % 8 == 0)
                {
                    // printf("\n");
                    fprintf(ofp, "\n");
                }
                else
                {
                    // printf(" ");
                    fprintf(ofp, " ");
                }
            }
        }
        else if (NowInWord == -1)
        {
            if (isalnum(ch) || ch == '_')
            {
            }
            else
            {
                NowInWord = 0;
            }
        }
        else
        {
            if (isalpha(ch))
            {
                if (isdigit(oldch))
                {
                    NowInWord = -1;
                }
                else
                {
                    NowInWord = 1;
                    // putchar(ch);
                    fprintf(ofp, "%c", ch);
                }
            }
        }
        oldch = ch;
    }
    fclose(fp);
    fclose(ofp);
    return 0;
}

/*** 結果 ***

wer qwe123 wer456 sw_qwe q12_12 A123B123 wsed_123

*************/
