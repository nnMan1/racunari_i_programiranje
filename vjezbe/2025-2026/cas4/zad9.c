//napisati program koji provjerava da li 
//je prirodan broj n prost


#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int i;
    int prost = 1;

    for(i=2;i<=sqrt(n);i++)
        if(n % i == 0) 
            prost = 0;

    if(prost == 1)
        printf("Prost\n");
    else
        printf("Nije prost\n");     

    return 0;
}