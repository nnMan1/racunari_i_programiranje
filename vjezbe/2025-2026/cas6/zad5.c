//naci NZD i NZS brojeva
#include <stdio.h>

int NZD(int a, int b) {
    while(b != 0) {
        int q = a % b;
        a = b;
        b = q;
    }

    return a;
}

int NZS(int a, int b) {
    return a * b / NZD(a, b);
}

int main() {

    int x;
    int y;
    scanf("%d%d", &x, &y);
    printf("NZD(%d, %d) = %d\n", x, y, NZD(x, y));
    printf("NZS(%d, %d) = %d\n", x, y, NZS(x, y));

    return 0;
}