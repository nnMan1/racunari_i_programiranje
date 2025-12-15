#include <stdio.h>

int duzina(char str[]) {
    int i=0;

    while(str[i] != '\0')
        i++;

    return i;
}

void stampaj_obrnuto(char str[]) {

    int n = duzina(str);

    for(int i=n-1;i>=0;i--)
        printf("%c", str[i]);
}

int iskljucivo_velika(char str[]) {
    int n = duzina(str);

    for(int i=0;i<n;i++)
        if(!('A' <= str[i] && str[i] <= 'Z'))
            return 0;
    
    return 1;
}

int razliciti(char str[]) {
    int poavljivanje[256] = {0};

    int n = duzina(str);

    for(int i=0;i<n;i++)
        poavljivanje[str[i]] ++;

    for(int i=0;i<256;i++)
        if(poavljivanje[i] > 1)
            return 0;
    
    return 1;
}

int pretvori_u_mala(char str[]) {
    int n = duzina(str);

    for(int i=0;i<n;i++)
        if('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
}

int palindrom(char str[]) {
    int n = duzina(str);

    for(int i=0;i<n/2;i++)
        if(str[i] != str[n-i-1])
            return 0;
    
    return 1;
}

int main() {
    
    char str[100];
    scanf("%s", str);

    pretvori_u_mala(str);

    printf("Obrnuto: ");
    stampaj_obrnuto(str);
    printf("\n");

    printf("Samo velika: %s\n", iskljucivo_velika(str) ? "DA" : "NE");
    printf("Razliciti: %s\n", razliciti(str) ? "DA" : "NE");
    printf("Palindrom: %s\n", palindrom(str) ? "DA" : "NE");

    return 0;
}