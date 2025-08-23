#include "header.h"
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int acum = 1;
    if (n < 0)
        return -1; // Error: factorial no definido para negativos
    for (int i = 1; i <= n; i++)
        acum *= i;
    return acum;
}

int combinatoria(int m, int n)
{
    if(m>=n && n>=0)
        return factorial(m) / (factorial(n)*factorial(m-n));
    return 1;
}

int ex(int x, int tol)
{
    int termino=1, i=1;
    while(termino>tol)
    {
        termino += pow(x, i)/factorial(i);
        i++;
    }
    return termino;
}