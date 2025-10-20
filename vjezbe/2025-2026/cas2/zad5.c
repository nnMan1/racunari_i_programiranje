// učitava dužine stranica trougla i 
// štampa njegovu površinu
#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    printf("Unesite duzine stranica trougla: \n");
    scanf("%f%f%f", &a, &b, &c);

    float s = (a + b + c) / 2;
    float p = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Povrsina trougla je: %f\n", p);
    return 0;
}
