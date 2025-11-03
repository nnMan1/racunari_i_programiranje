//napisati program koji stampa sve 
//proste djelioce prirodnog broja n

#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int i;
    // for(i=2;i<=n;i++)
    //     if(n % i == 0) {
    //         //provjera da li je br i prost
    //         int j;
    //         int prost = 1;

    //         for(j=2;j*j<=i;j++)
    //             if(i % j == 0) 
    //                 prost = 0;

    //         if(prost == 1)
    //             printf("%d\n", i);
    //     }

    //najmanji djelilac prirodnog broja n koji je 
    //veci od 1 je sigurno prost

    for(int i=2;i<=n;i++) {
        if(n % i == 0)
            printf("%d ", i);

        while(n % i == 0)
            n /= i;
    }

    return 0;
}