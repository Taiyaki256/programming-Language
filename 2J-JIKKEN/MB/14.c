#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*

man	comp	(man-comp+3)%3	man	comp	man勝敗
0	0	0	グー	グー	あいこ
0	1	2	グー	チョキ	勝ち
0	2	1	グー	パー	負け
1	0	1	チョキ	グー	負け
1	1	0	チョキ	チョキ	あいこ
1	2	2	チョキ	パー	勝ち
2	0	2	パー	グー	勝ち
2	1	1	パー	チョキ	負け
2	2	0	パー	パー	あいこ

*/

typedef struct
{
    int comp;
    int man;
    int result;
} jyankenType;

int getRand(int min, int max)
{
    if (!(max > min))
    {
        return -1;
    }
    else
    {
        return rand() % (max - min + 1) + min;
    }
}

char* getJyanken(int num)
{
    switch (num)
    {
    case 0:
        return "グー";
    case 1:
        return "チョキ";
    case 2:
        return "パー";
    default:
        return "エラー";
    }
}

char* getResult(int num)
{
    switch (num)
    {
    case 0:
        return "あいこ";
    case 1:
        return "あなたの負け";
    case 2:
        return "あなたの勝ち";
    default:
        return "エラー";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int battleNum;
    // 何試合行うか
    printf("何試合行いますか？ ->");
    scanf("%d", &battleNum);
    printf("%d試合行います\n", battleNum);
    jyankenType* jyanken = calloc(battleNum, sizeof(jyankenType));
    int i;
    int win = 0;
    int lose = 0;
    int draw = 0;
    for (i = 0; i < battleNum; i++)
    {
        printf("====================\n");
        printf("%d回目のじゃんけん\n", i + 1);
        printf("あなたは何を出しますか？\n0:グー 1:チョキ 2:パー\n->");
        scanf("%d", &jyanken[i].man);
        if (jyanken[i].man != 0 && jyanken[i].man != 1 && jyanken[i].man != 2)
        {
            printf("\x1b[31m[ERROR] 0~2の数字を入力してください\x1b[m\n");
            i--;
            continue;
        }
        printf("あなたは %s を出しました\n", getJyanken(jyanken[i].man));
        jyanken[i].comp = getRand(0, 2);
        printf("コンピュータは %s を出しました\n\n", getJyanken(jyanken[i].comp));
        jyanken[i].result = (jyanken[i].man - jyanken[i].comp + 3) % 3;
        printf("結果は ");
        switch (jyanken[i].result)
        {
        case 0:
            draw++;
            break;
        case 1:
            lose++;
            break;
        case 2:
            win++;
            break;
        }
        printf("%s です\n", getResult(jyanken[i].result));
    }
    printf("====================\n");
    printf("最終結果\n");
    printf("n回目: あなた - 相手   ~ 対戦結果\n");
    for (i = 0; i < battleNum; i++)
    {
        // 日本語（全角？）だと半角文字の二倍の幅をとる？
        printf("%d回目: %-6.6s - %-6.6s ~ %-12.12s\n", i + 1, getJyanken(jyanken[i].man), getJyanken(jyanken[i].comp), getResult(jyanken[i].result));
    }
    printf("勝ち: %d回\n負け: %d回\nあいこ: %d回\n", win, lose, draw);
    free(jyanken);
    return 0;
}
