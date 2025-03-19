#include <stdio.h>
int main() {
    float c;
    float k;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("Isso equivale a %.2f em kelvins", k);
}

