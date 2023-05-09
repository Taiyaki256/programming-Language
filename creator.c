#include <stdio.h>

int main()
{
	for (int i = 2; i <= 15; i++)
	{
		char filename[20];
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
	return 0;
}
