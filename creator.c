#include <stdio.h>

int main()
{
	int i, j;
	char filename[20];
	int small = 1;
	int big = 1;
	printf("n章からのファイルを作成 n => ");
	scanf("%d", &big);
	printf("m節からのファイルを作成 m => ");
	scanf("%d", &small);
	for (i = big; i <= 8; i++)
	{

		for (i = small; i <= 15; i++)
		{
			small = 1;
			sprintf(filename, "p05ex%02d.c", i);
			FILE *file = fopen(filename, "w");
			fprintf(file, "/***   %s   ***/\n", filename);
			fprintf(file, "/***   ps20      ***/\n");
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
