/**
5
5 4
5 4 3
5 4 3 2 
5 4 3 2 1
1 2 3 4 
1 2 3
1 2
1
 */

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        for(int j=n;j>=n-i;j--)
            printf("%d ", j);
        printf("\n");
    }

    for(int i=0;i<n-1;i++) {
        for(int j=1;j<n-i;j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}