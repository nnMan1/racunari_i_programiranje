/**
 * Soba pravougaone osnove 
 * dužine a metara, širine b metara i visine c metara 
 * ima jedna 
 * pravougaona vrata dimenzija pxq centimetara 
 * i na lijevom i desnom zidu od vrata 
 * po jedan prozor dimenzija rxs centimetara. 
 * Jednom kantom boje, može se ofarbati f kvadratnih metara zidova i plafona. 
 * Napišite program koji učitava realne brojeve a, b, c i f i cijele brojeve p, q, r i s i štampa jedan cio broj – koliko kanti farbe treba kupiti da bi se ofarbala data soba. 
 */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, f;
    float p, q, r, s;

    scanf("%f%f%f%f%f%f%f%f", &a, &b, &c, &f, &p, &q, &r, &s);

    p /= 100;
    q /= 100;
    r /= 100;
    s /= 100;

    float P = a * b + 2 * a * c + 2 * b * c - 2 * r *s - p * q;

    int n = ceil(P / f);
    printf("%d", n);

    return 0;
}