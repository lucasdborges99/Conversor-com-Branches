#include <stdio.h>
#include <locale.h>

main() {
    setlocale(LC_ALL,"Portuguese");
	float c;
	float f;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("Isso equivale a %.2f fahrenheit", f);
}

