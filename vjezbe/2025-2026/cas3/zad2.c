/**
 * Za unieti broj bodova, stampati ocjenu koju je student dobio.
 */

 #include <stdio.h>

 int main() {

    int br_bodova;
    printf("Unesite broj bodova: ");
    scanf("%d", &br_bodova);

    if(br_bodova >= 85)
        printf("10");
    else 
        if(br_bodova >= 75)
            printf("9");
        else 
            if(br_bodova >= 65)
                printf("8");
            else 
                if(br_bodova >= 55)
                    printf("7");
                else 
                    if(br_bodova >= 45)
                        printf("6");
                    else 
                        printf("5");
    return 0;
 }