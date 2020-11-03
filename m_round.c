#include "libm.h"

int     m_round(double n)
{
    int     tmp;
    int     tmp_2;

    tmp = (int)n * 10;
    tmp_2 = (int)(n * 10);
    if (tmp_2 - tmp < 5)
        return ((int)n);
    return ((int)n + 1);
}