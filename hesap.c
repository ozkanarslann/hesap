#include <stdio.h>

int main() {
    char islem;
    float sayi1, sayi2;

    printf("Islem sec (+, -, *, /): ");
    scanf(" %c", &islem);

    printf("Iki sayi gir: ");
    scanf("%f %f", &sayi1, &sayi2);

    if (islem == '+') printf("Sonuc: %.2f", sayi1 + sayi2);
    else if (islem == '-') printf("Sonuc: %.2f", sayi1 - sayi2);
    else if (islem == '*') printf("Sonuc: %.2f", sayi1 * sayi2);
    else if (islem == '/') printf("Sonuc: %.2f", sayi1 / sayi2);
    else printf("Gecersiz!");

    return 0;
}
