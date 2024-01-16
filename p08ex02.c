/***   p08ex02.c   ***/
/***   ps20      ***/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numerator;
    int denominator;
} fraction_t;

void printcheckfraction(fraction_t a, char ope, fraction_t b, fraction_t c)
{
    printf("(%d/%d) %c (%d/%d) = (%d/%d)\n", a.numerator, a.denominator, ope, b.numerator, b.denominator, c.numerator, c.denominator);
}

fraction_t reduceFraction(fraction_t fraction)
{
    fraction_t myfrac;
    int x = abs(fraction.numerator);
    int y = abs(fraction.denominator);
    int r, tmp;
    if (x < y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    /*ユークリッドの互除法で最大公約数を求める*/
    r = x % y;
    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    /*ユークリッドの互除法おしまい この時点でyが最大公約数*/
    myfrac.numerator = fraction.numerator / y;
    myfrac.denominator = fraction.denominator / y;
    if (myfrac.numerator < 0 && myfrac.denominator < 0)
    {
        myfrac.numerator = myfrac.numerator * -1;
        myfrac.denominator = myfrac.denominator * -1;
        return myfrac;
    }
    if (myfrac.denominator < 0)
    {
        myfrac.numerator = myfrac.numerator * -1;
        myfrac.denominator = myfrac.denominator * -1;
        return myfrac;
    }
    return myfrac;
}

fraction_t addFraction(fraction_t a, fraction_t b)
{
    int denomi = a.denominator * b.denominator;
    int nume_a = a.numerator * b.denominator;
    int nume_b = b.numerator * a.denominator;
    fraction_t c = { nume_a + nume_b, denomi };
    c = reduceFraction(c);
    return c;
}
fraction_t subtractFraction(fraction_t a, fraction_t b)
{
    int denomi = a.denominator * b.denominator;
    int nume_a = a.numerator * b.denominator;
    int nume_b = b.numerator * a.denominator;
    fraction_t c = { nume_a - nume_b, denomi };
    c = reduceFraction(c);
    return c;
}
fraction_t multiplyFraction(fraction_t a, fraction_t b)
{
    int denomi = a.denominator * b.denominator;
    int nume = a.numerator * b.numerator;
    fraction_t c = { nume, denomi };
    c = reduceFraction(c);
    return c;
}
fraction_t divideFraction(fraction_t a, fraction_t b)
{
    fraction_t newb = { b.denominator, b.numerator };
    fraction_t c = multiplyFraction(a, newb);
    c = reduceFraction(c);
    return c;
}

void checkfraction(fraction_t a, fraction_t b)
{
    fraction_t c;
    c = addFraction(a, b);
    printcheckfraction(a, '+', b, c);
    c = subtractFraction(a, b);
    printcheckfraction(a, '-', b, c);
    c = subtractFraction(b, a);
    printcheckfraction(b, '-', a, c);

    c = multiplyFraction(a, b);
    printcheckfraction(a, '*', b, c);
    c = divideFraction(a, b);
    printcheckfraction(a, '/', b, c);
    c = divideFraction(b, a);
    printcheckfraction(b, '/', a, c);
    printf("\n");
}

int main()
{
    fraction_t a = { 1, 6 };
    fraction_t b = { 1, 3 };
    fraction_t am = { -1, 6 };
    fraction_t bm = { -1, 3 };
    fraction_t c = { 3, 4 };
    fraction_t d = { 16, 3 };
    fraction_t cm = { -3, 4 };
    fraction_t dm = { -16, 3 };
    checkfraction(a, b);
    checkfraction(a, bm);
    checkfraction(am, b);
    checkfraction(am, bm);
    checkfraction(c, d);
    checkfraction(c, dm);
    checkfraction(cm, d);
    checkfraction(cm, dm);
    return 0;
}

/*** 結果 ***

(1/6) + (1/3) = (1/2)
(1/6) - (1/3) = (-1/6)
(1/3) - (1/6) = (1/6)
(1/6) * (1/3) = (1/18)
(1/6) / (1/3) = (1/2)
(1/3) / (1/6) = (2/1)

(1/6) + (-1/3) = (-1/6)
(1/6) - (-1/3) = (1/2)
(-1/3) - (1/6) = (-1/2)
(1/6) * (-1/3) = (-1/18)
(1/6) / (-1/3) = (-1/2)
(-1/3) / (1/6) = (-2/1)

(-1/6) + (1/3) = (1/6)
(-1/6) - (1/3) = (-1/2)
(1/3) - (-1/6) = (1/2)
(-1/6) * (1/3) = (-1/18)
(-1/6) / (1/3) = (-1/2)
(1/3) / (-1/6) = (-2/1)

(-1/6) + (-1/3) = (-1/2)
(-1/6) - (-1/3) = (1/6)
(-1/3) - (-1/6) = (-1/6)
(-1/6) * (-1/3) = (1/18)
(-1/6) / (-1/3) = (1/2)
(-1/3) / (-1/6) = (2/1)

(3/4) + (16/3) = (73/12)
(3/4) - (16/3) = (-55/12)
(16/3) - (3/4) = (55/12)
(3/4) * (16/3) = (4/1)
(3/4) / (16/3) = (9/64)
(16/3) / (3/4) = (64/9)

(3/4) + (-16/3) = (-55/12)
(3/4) - (-16/3) = (73/12)
(-16/3) - (3/4) = (-73/12)
(3/4) * (-16/3) = (-4/1)
(3/4) / (-16/3) = (-9/64)
(-16/3) / (3/4) = (-64/9)

(-3/4) + (16/3) = (55/12)
(-3/4) - (16/3) = (-73/12)
(16/3) - (-3/4) = (73/12)
(-3/4) * (16/3) = (-4/1)
(-3/4) / (16/3) = (-9/64)
(16/3) / (-3/4) = (-64/9)

(-3/4) + (-16/3) = (-73/12)
(-3/4) - (-16/3) = (55/12)
(-16/3) - (-3/4) = (-55/12)
(-3/4) * (-16/3) = (4/1)
(-3/4) / (-16/3) = (9/64)
(-16/3) / (-3/4) = (64/9)

*************/
