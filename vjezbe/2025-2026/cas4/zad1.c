#include <stdio.h>

int main() {

    //stampati brojeve od 5 do 25
    // int br = 5;
    // while(br <= 25) {
    //     printf("%d ", br);
    //     br++;
    // }

    // for(int br = 5; br<=25; br++) {
    //     printf("%d ", br);
    //     printf("%d \n", br*br);
    // }

    for(int br = 25; br>=5; br--) {
        printf("%d ", br);
        printf("%d \n", br*br);
    }

    printf("\n");

    return 0;
}