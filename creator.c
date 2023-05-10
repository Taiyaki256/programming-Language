#include <stdio.h>

int main()
{
	int i, j;
	char filename[20];
	int small = 1;
	int big = 1;
	int smallLimit = 0;
	int num = 0;
	printf("あなたの出席番号を入力 num => ");
	scanf("%d", &num);
	printf("n章からのファイルを作成 n => ");
	scanf("%d", &big);
	printf("m節からのファイルを作成 m => ");
	scanf("%d", &small);
	for (j = big; j <= 8; j++)
	{
		switch (big)
		{
		case 1:
			smallLimit = 10;
			break;
		case 2:
			smallLimit = 17;
			break;
		case 3:
			smallLimit = 11;
			break;
		case 4:
			smallLimit = 18;
			break;
		case 5:
			smallLimit = 15;
			break;
		case 6:
			smallLimit = 3;
			break;
		case 7:
			smallLimit = 7;
			break;
		case 8:
			smallLimit = 3;
			break;
		default:
			break;
		}
		for (i = small; i <= 15; i++)
		{
			small = 1;
			sprintf(filename, "p%02dex%02d.c", j, i);
			FILE *file = fopen(filename, "w");
			fprintf(file, "/***   %s   ***/\n", filename);
			fprintf(file, "/***   ps%02d      ***/\n", num);
			fprintf(file, "\n");
			fprintf(file, "#include <stdio.h>\n");
			fprintf(file, "\n");
			fprintf(file, "int main()\n");
			fprintf(file, "{\n");
			fprintf(file, "\n");
			fprintf(file, "    return 0;\n");
			fprintf(file, "}\n");
			fprintf(file, "\n");
			fprintf(file, "/*** 結果 ***\n");
			fprintf(file, "\n");
			fprintf(file, "*************/\n");
			fclose(file);
		}
	}
	return 0;
}
