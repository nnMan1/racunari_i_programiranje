//Štampati tablicu množenja sa 9, 
//po jedno množenje u redu, 
//u formatu: 9 x 1 = 9 ... 9 x 7 = 63...

#include <stdio.h>

int main() {
    for(int i=1;i<=10;i++) 
        printf("9 x %d = %d\n", i, i * 9);

    return 0;
}