#include <stdio.h>

double minimum(double a, double b); 

void uvecaj(int x) {
    x++;
}

int zbir(int x, int y) {
    int rezultat = x + y;
    return rezultat;
}

void stampaj_broj(int x) {
    printf("%d\n", x);
    return;
}

int main() {

    int a = 6;
    uvecaj(a);

    printf("%d\n", a);
    return 0;

    int b = 8;

    int c = zbir(a, b);
    stampaj_broj(c);

    double e = 5.5;
    double f = 4.7;

    double g = minimum(e, f);
    printf("%lf\n", g);


    double t = minimum(a, b);
    printf("%lf\n", minimum(a, b));

    double h = zbir(e, f);
    printf("%lf\n", h);


    return 0;
}

double minimum(double a, double b) {
    if(a < b)
        return a;
    else 
        return b;

    // return a < b ? a : b;
}