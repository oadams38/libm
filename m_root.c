#include "libm.h"

double     m_root(double n)
{
    double      tmp;
    int         i;

    i = -1;
    tmp = 1;
    while (++i < 20)
        tmp = (tmp + (n / tmp)) / 2;
    return tmp;
}