#include <stdio.h>
#include <math.h>

void quadrat(int a, int b, int c){
    double x1, x2;
    double d = b*b - 4*a*c;
    if(d < 0){
        printf("Нет корней \n");
    }
    if(d == 0.){
        x1 = -b/2*a;
        printf("%f \n", x1);
    }
    if(d > 0){
        d = sqrt(d);
        x1 = (-b+d)/2*a;
        x2 = (-b-d)/2*a;
        printf("%f %f \n", x1, x2);
    }
}
