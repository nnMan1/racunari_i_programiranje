//Napisati kod koji za 
//dati prirodan broj n štampa sve 
//njegove pozitivne djelioce.

#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int i;
    for(i=1;i<sqrt(n);i++)
        if(n % i == 0) {
            printf("%d ", i);
            printf("%d ", n / i);
        }
    
    if(i * i == n)
        printf("%d", i);    

    return 0;
}