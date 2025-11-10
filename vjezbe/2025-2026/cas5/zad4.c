#include <stdio.h>

int main() {

    int x = 5;
    int y = 6;

    x = (y = 4);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    if(5 == x) 
        printf("x = %d", x);
    
    return 0;
}