#include <stdio.h>

main(){
    float celcius, fahrenheit;

    printf("The temperature in Celsius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;
    
    printf("The temperature in Fahrenheit: %.2f", fahrenheit);
}