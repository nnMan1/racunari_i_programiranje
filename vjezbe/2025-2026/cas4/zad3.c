//Napisati kod koji štampa sve cijele brojeve 
//iz segmenta [a,b] koji pri dijeljenju sa 
//7 daju ostatak 1 ili ostatak 4

#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    for(int i=a;i<=b;i++) {
        // if(i % 7 == 1)
        //     printf("%d ", i);
        // if(i % 7 == 4)
        //     printf("%d ", i);

        if(i % 7 == 1 || i % 7 == 4) // i % 7 == 1 or i % 7 == 4
            printf("%d ", i);
    }

    return 0;
}