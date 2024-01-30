#include <stdio.h>
#include <stdlib.h>

#define FNUM 12

/* PNMについてのヘッダとデータの構造体 */
typedef struct
{
    char* fname; /* ファイル名記憶 */
    int Magic; /* マジックナンバー：整数部のみ */
    int HSize; /* 横画素数 */
    int VSize; /* 縦画素数 */
    int MaxY; /* 最大輝度255固定 濃淡画像の時以外は無視 */
    unsigned char** img;
} PNM;

void makeArray(unsigned char*** arr, int V, int H)
{
    int i;
    *arr = (unsigned char**)calloc(V, sizeof(char*));
    for (i = 0; i < V; i++)
    {
        (*arr)[i] = (unsigned char*)calloc(H, sizeof(char));
    }
}

void freeArray(unsigned char*** arr, unsigned V)
{
    int i;
    for (i = 0; i < V; i++)
    {
        free((*arr)[i]);
    }
    free(*arr);
}

void printPNMHeader(PNM* p, unsigned long pixelNum)
{
    printf("File: %s\n", p->fname);
    printf("Magic = P%d,  ", p->Magic);
    printf("HSize = %4d,  ", p->HSize);
    printf("VSize = %4d,  ", p->VSize);
    if (p->Magic == 2)
    {
        printf("MaxY = %4d", p->MaxY);
    }
    printf("\n");
    // 課題のエラーは検出し，どんなエラーが表示すること
    printf("\x1b[31m");
    // 縦画素数が0
    if (p->VSize == 0)
    {
        printf("Error: VSize is 0\n");
    }
    // 横画素数が0
    if (p->HSize == 0)
    {
        printf("Error: HSize is 0\n");
    }
    // 最大輝度が0
    if (p->MaxY == 0)
    {
        printf("Error: MaxY is 0\n");
    }
    // 最大輝度が255を超えてる
    if (p->MaxY > 255)
    {
        printf("Error: MaxY is over 255\n");
    }
    // 画素データが不足している
    // printf("pixelNum = %ld\n", pixelNum);
    // printf("VSize * HSize = %d\n", p->VSize * p->HSize);
    if (p->VSize * p->HSize > pixelNum)
    {
        printf("Error: Pixel data is not enough\n");
    }
    printf("\x1b[m");
    printf("\n");
}

unsigned long readPNMHeaderAndData(PNM* p)
{
    // ヘッダーとデータを読み込み，読み込んだ画素数を返す，読み込む画素数は，VSize*HSizeまで
    FILE* fp;
    int num = 0; // #で始まるリマーク分を除く読み込み行数
    unsigned long pixelNum, readNum = 0; // 画素数と読み込んだ画素数
    unsigned i, j;
    char buff[1024];
    int temp;
    // fgets()を使ってbuffに１行を読み込む，リマーク文以外を相手にする
    fp = fopen(p->fname, "rb");
    while (num < 3)
    {
        fgets(buff, 1024, fp);
        if (buff[0] != '#')
        {
            switch (num)
            {
            case 0:
                p->Magic = buff[1] - '0';
                break;
            case 1:
                // sscanf関数を使って二つの値HSize, VSizeを読み込む
                sscanf(buff, "%d %d", &(p->HSize), &(p->VSize));
                // ●pixelNumの計算
                pixelNum = p->VSize * p->HSize;
                // ●メンバ変数のimgに二次元配列を確保
                makeArray(&(p->img), p->VSize, p->HSize);
                // ●マジックナンバーが1の時は最大輝度データがないのでfgetsさせないためnum++しておく
                if (p->Magic == 1)
                    num++;
                break;
            case 2:
                if (p->Magic == 1)
                    break;
                // MaxYを読み込む
                sscanf(buff, "%d", &(p->MaxY));
                break;
            }
            num++;
        }
    }

    // 画素データを読む，画素データ中にリマーク文はないと仮定，必要な変数は各自で定義
    for (i = 0; i < (p->VSize); i++)
    {
        for (j = 0; j < (p->HSize); j++)
        {
            // ●fscanfを使ってデータを一つ読む，データはunsigned char型として読み込めないので
            // 　int型として読み込み，imgに代入するとき，unsigned char型としてキャストする
            // 　fscanfの引数や返す値はネット検索して調べる
            // ●fscanfは読み込めなかったら，EOF(EndOfFile)を返すのでその場合は配列を開放して読み込めた
            // 　画素数を返す
            // 　ヒント：if(fscanfが返した値==EOF){配列の開放をしてreturnで画素数を返す}
            if (fscanf(fp, "%d", &temp) == EOF)
            {
                freeArray(&(p->img), p->VSize);
                return readNum;
            }
            p->img[i][j] = (unsigned char)temp;

            readNum++; // 読み込めたら読み込んだ画素数を1増やす
        }
    }

    // ファイルをクローズする
    // ●二次元配列を解放して読み込んだ画素数を返す
    fclose(fp);
    freeArray(&(p->img), p->VSize);
    return readNum;
}

int main()
{
    PNM p;
    int i;
    unsigned long pixelNum;
    const char* fnames[FNUM] = { "lenna_bin.pbm", "auto_bin.pbm", "mandrill_gray.pgm", "home_gray.pgm", "lenna_bin2.pbm", "lenna_bin3.pbm", "auto_bin2.pbm", "mandrill_gray2.pgm", "mandrill_gray3.pgm",
        "home_gray2.pgm", "milkdrop_gray.pgm", "auto_color.ppm" };

    for (i = 0; i < FNUM; i++)
    {
        p.fname = fnames[i]; // 初期化
        p.Magic = -1; // 初期化
        p.HSize = -1; // 初期化
        p.VSize = -1; // 初期化
        p.MaxY = -1; // 初期化
        p.img = NULL; // 初期化
        pixelNum = readPNMHeaderAndData(&p);
        printPNMHeader(&p, pixelNum);
    }

    return 0;
}
