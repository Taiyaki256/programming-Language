#include <stdio.h>

int main()
{
    /*�ϐ��錾*/
    int intNumber;            /*���͒l*/
    int multiple2, multiple3; /*�{��*/

    /*�����̎擾*/
    printf("��������͂��Ă��������@>>");
    scanf("%d", &intNumber);
    /* "%d\n" �ɂȂ�Ȃ����Ƃɒ��ӁBscanf�̏����ɂ� \n �͕t���Ȃ��B */

    /*�Q�{���C�R�{���̌v�Z*/
    multiple2 = 2 * intNumber;
    multiple3 = 3 * intNumber;

    /*�v�Z���ʂ̕\��*/
    printf("�������ق�����R�̔{���� %d %d %d �ł�\n", intNumber, multiple2, multiple3);
    return 0;
}

/*******************���s����**********************
��������͂��Ă��������@>>21
�������ق�����R�̔{���� 21 42 63 �ł�
*************************************************/