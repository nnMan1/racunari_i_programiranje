#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    printf("MAX_RADN = %d\n", RAND_MAX);
    int x = rand();
    printf("%d\n", x);

    for(int i=0;i<20;i++) {
        int y = rand() % 6 + 1; //slucajan broj izmedju [0, 5] 
        printf("%d\t", y);

        if(i % 5 == 4)
            printf("\n");
    }     

    return 0;
}