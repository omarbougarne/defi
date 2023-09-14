#include <stdio.h>

int main() {
    float temperature;

    printf("Enterer la temperature: ");
    scanf("%f", &temperature);
    temperature = (temperature-32)/1.8;
    printf("Celsius: %f\n", temperature);
    if (temperature <= 0) {
    printf("Tres froid");
    } else if (temperature > 0 && temperature <= 15) {
        printf("froid");
    }else if (temperature > 15 && temperature <= 25){
        printf("chaud");
    }else if(temperature > 25){
        printf("tres chaud");
    }

    return 0;
}
