#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*

man	comp	(man-comp+3)%3	man	comp	man���s
0	0	0	�O�[	�O�[	������
0	1	2	�O�[	�`���L	����
0	2	1	�O�[	�p�[	����
1	0	1	�`���L	�O�[	����
1	1	0	�`���L	�`���L	������
1	2	2	�`���L	�p�[	����
2	0	2	�p�[	�O�[	����
2	1	1	�p�[	�`���L	����
2	2	0	�p�[	�p�[	������

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
        return "�O�[";
    case 1:
        return "�`���L";
    case 2:
        return "�p�[";
    default:
        return "�G���[";
    }
}

char* getResult(int num)
{
    switch (num)
    {
    case 0:
        return "������";
    case 1:
        return "���Ȃ��̕���";
    case 2:
        return "���Ȃ��̏���";
    default:
        return "�G���[";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int battleNum;
    // �������s����
    printf("�������s���܂����H ->");
    scanf("%d", &battleNum);
    printf("%d�����s���܂�\n", battleNum);
    jyankenType* jyanken = calloc(battleNum, sizeof(jyankenType));
    int i;
    int win = 0;
    int lose = 0;
    int draw = 0;
    for (i = 0; i < battleNum; i++)
    {
        printf("====================\n");
        printf("%d��ڂ̂���񂯂�\n", i + 1);
        printf("���Ȃ��͉����o���܂����H\n0:�O�[ 1:�`���L 2:�p�[\n->");
        scanf("%d", &jyanken[i].man);
        if (jyanken[i].man != 0 && jyanken[i].man != 1 && jyanken[i].man != 2)
        {
            printf("\x1b[31m[ERROR] 0~2�̐�������͂��Ă�������\x1b[m\n");
            i--;
            continue;
        }
        printf("���Ȃ��� %s ���o���܂���\n", getJyanken(jyanken[i].man));
        jyanken[i].comp = getRand(0, 2);
        printf("�R���s���[�^�� %s ���o���܂���\n\n", getJyanken(jyanken[i].comp));
        jyanken[i].result = (jyanken[i].man - jyanken[i].comp + 3) % 3;
        printf("���ʂ� ");
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
        printf("%s �ł�\n", getResult(jyanken[i].result));
    }
    printf("====================\n");
    printf("�ŏI����\n");
    printf("n���: ���Ȃ� - ����   ~ �ΐ팋��\n");
    for (i = 0; i < battleNum; i++)
    {
        // ���{��i�S�p�H�j���Ɣ��p�����̓�{�̕����Ƃ�H
        printf("%d���: %-6.6s - %-6.6s ~ %-12.12s\n", i + 1, getJyanken(jyanken[i].man), getJyanken(jyanken[i].comp), getResult(jyanken[i].result));
    }
    printf("����: %d��\n����: %d��\n������: %d��\n", win, lose, draw);
    free(jyanken);
    return 0;
}
