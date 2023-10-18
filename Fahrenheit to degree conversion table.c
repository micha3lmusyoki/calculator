#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    float start, end, increment;

    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%f", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    printf("\nFahrenheit\tCelsius\n");

    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%8.2f\t%6.2f\n", fahrenheit, celsius);
    }

    return 0;
}

