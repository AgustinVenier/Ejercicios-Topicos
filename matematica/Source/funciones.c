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
//ejercicio 4:no entendi
//ejercicio 5: hasta que numero calculo la serie fibonacci?

int seno(int x, int tol)
{
    int i=1, termino=x, cont=1;
    while(abs(termino) > tol)
    {
        cont++;
        if(cont%2==0)
            termino-=(pow(i)/factorial(i));
        termino+=(pow(i)/factorial(i));
        i+=2;
    }
    return termino;
}

char clasificacion_naturales(int n)
{
    
}

int producto(int n, int m)
{
    int i, resultado=0;
    if(n<0||m<0)
        printf("No es un numero natural");
        return 1;
    for(i=0;i<m;i++)
        resultado+=n;
    return resultado;
}

//pregutnar ejercicio 9: informo el resto por un lado y por otro informo el cociente?

int suma_primeros(int n)
{
    int i, suma;
    if(n<1)
        printf("No es un numero natural");
    for(i=0;i<n;i++)
        suma+=i;
    return suma;
}

int suma_pares(int n)
{
    int i, suma;
    if(n<1)
        printf("No es un numero natural");
    for(i=0;i<n;i++)
    {
        if(n%2==0)
            suma+=i;
    }
    return suma;
}

