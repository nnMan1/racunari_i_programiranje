/*
Napisati program koji ucitava tri para tacaka (realni br) u ravni.
Ispitati da li ove tacke obrazuju trougao.
Ako obrazuju trougao stampati njegovu povrsinu i obim.
*/
#include <stdio.h>
#include <math.h>

double duzina_duzi(double x1, double y1, double x2, double y2) {
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return d;
}

int postoji_trougao(double a, double b, double c) {
    if(a + b > c && a + c > b && b + c > a)
        return 1;

    return 0;
}

double povrsina_trougla(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double p = sqrt(s * (s-a) * (s-b) * (s-c));
    return p;
}

double obim_trougla(double a, double b, double c) {
    return a + b + c;
}

int main() {

    double x1, y1, x2, y2, x3, y3;
    printf("x1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);

    printf("x2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);

    printf("x3 = ");
    scanf("%lf", &x3);
    printf("y3 = ");
    scanf("%lf", &y3);

    double a = duzina_duzi(x1, y1, x2 ,y2);
    double b = duzina_duzi(x1, y1, x3, y3);
    double c = duzina_duzi(x2, y2, x3, y3);

    if(postoji_trougao(a, b, c)) {
        printf("O = %lf\n", obim_trougla(a, b, c));
        printf("P = %lf\n", povrsina_trougla(a, b, c));
    } else {
        printf("Zadate tacke ne obrazuju trougao\n");
    }


    return 0;
}
