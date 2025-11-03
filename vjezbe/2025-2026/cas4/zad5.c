//Napisati kod koji za dati 
//prirodan broj n štampa n! (n! = 1*2*...*n)

#include <stdio.h>

int main() {

    long n; //64 - bin cijeli brojevi
    scanf("%ld", &n);

    long fac=1;

    for(int i=1;i<=n;i++)
        fac *= i;

    printf("%ld", fac);
    return 0;
}