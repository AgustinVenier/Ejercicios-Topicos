#include "header.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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
            termino-=(pow(x,i)/factorial(i));
        termino+=(pow(x,i)/factorial(i));
        i+=2;
    }
    return termino;
}

char clasificacion_naturales(int n)
{
    int i, suma=0;
    if(n<0)
        return 'N'; //no es natural
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            suma+=i;
    }
    if(suma==n)
        return 'P'; //perfecto
    if(suma<n)
        return 'D'; //deficiente
    return 'A'; //abundante
}

int producto(int n, int m)
{
    int i, resultado=0;
    if(n<0||m<0)
    {
        printf("No es un numero natural");
        return 1;
    }
    for(i=0;i<m;i++)
        resultado+=n;
    return resultado;
}

//pregutnar ejercicio 9: informo el resto por un lado y por otro informo el cociente?

int suma_primeros(int n)
{
    int i, suma=0;
    if(n<1)
    {
        printf("No es un numero natural");
        return 1;
    }
        
    for(i=0;i<n;i++)
        suma+=i;

    return suma;
}

int suma_pares(int n)
{
    int i, suma=0;
    if(n<1)
    {
        printf("No es un numero natural");
        return 1;
    }

    for(i=0;i<n;i++)
    {
        if(n%2==0)
            suma+=i;
    }

    return suma;
}

int suma_pares_menores(int n)
{
    int i, suma=0;
    if(n<1)
    {
        printf("No es un numero natural");
        return 1;
    }
        
    for(i=0;i<n;i++)
    {
        if(n<suma && n%2==0)
            suma+=i;
    }

    return suma;
}

int es_primo(int n)// 1 es primo y 0 no es primo
{
    int cont=0, i;
    if(n>1)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                cont++;
        }
        if(cont>2)
            return 0;
        return 1;
    }
    else
        return 0;
}
