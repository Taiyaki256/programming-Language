#include <stdio.h>

int main()
{
    /*変数宣言*/
    int intNumber;            /*入力値*/
    int multiple2, multiple3; /*倍数*/

    /*整数の取得*/
    printf("整数を入力してください　>>");
    scanf("%d", &intNumber);
    /* "%d\n" にならないことに注意。scanfの書式には \n は付けない。 */

    /*２倍数，３倍数の計算*/
    multiple2 = 2 * intNumber;
    multiple3 = 3 * intNumber;

    /*計算結果の表示*/
    printf("小さいほうから３つの倍数は %d %d %d です\n", intNumber, multiple2, multiple3);
    return 0;
}

/*******************実行結果**********************
整数を入力してください　>>21
小さいほうから３つの倍数は 21 42 63 です
*************************************************/