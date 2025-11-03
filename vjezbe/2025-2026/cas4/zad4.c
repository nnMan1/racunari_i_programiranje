//Napisati kod koji izračunava zbir 
// 2^2 + 2^3 + ... + 2^10 , ne koristeći pow
#include <stdio.h>

int main() {
    int sum = 0;

    // for(int i=2;i<=10;i++) {
    //     //treba na sumu da dodamo 2^i
    //     int p = 1;
    //     for(int j=1;j<=i;j++)
    //         p *= 2;

    //     sum += p;
    // }

    // int p = 4; // 2^2

    // for(int i=2;i<=10;i++) {
    //     sum += p;
    //     p *= 2;
    // }

    for(int i=2, p=4;i<=10; i++, p*=2) 
        sum += p;
    
    printf("sum = %d\n", sum);

    return 0;
}