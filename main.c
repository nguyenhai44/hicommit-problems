#include <stdio.h>
int main() {
    double w, h;
    if (scanf("%lf %lf", &w, &h) != 2) return 0;
    double h_m = h / 100.0;
    double BMI = w / (h_m * h_m);
    if (BMI < 18.5) {
        printf("UNDERWEIGHT\n");
    } else if (BMI < 25.0) {
        printf("NORMAL\n");
    } else if (BMI < 30.0) {
        printf("OVERWEIGHT\n");
    } else {
        printf("OBESE\n");
    }
  return 0 ;
}