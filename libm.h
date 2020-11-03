#ifndef LIBM_H
# define LIBM_H

# include <unistd.h>
# include <stdio.h>

double      m_root(double n);
int         m_ceil(double n);
int         m_floor(double n);
int         m_round(double n);

int         m_squ(int n);
long        m_squl(int n);

#endif