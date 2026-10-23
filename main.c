#include <stdio.h>

int main() {
    float w, h;
    scanf("%f %f", &w, &h);
    float BMI = w / (h_m * h_m);
    if (BMI < 18.5) {
        printf("UNDERWEIGHT");
    } else if (BMI < 25.0) {
        printf("NORMAL");
    } else if (BMI < 30.0) {
        printf("OVERWEIGHT");
    } else {
        printf("OBESE");
    }

    return 0;
}