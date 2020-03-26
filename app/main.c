#include <stdio.h>

#include "myfunc.h"
#include "quadrat.h"

int main()
{
    printf("Hello World!\n");
    qans ans = quadrat(0, 0, 0);
    switch(ans.a){
        case -1:{
            printf("Бесконечное количество корней\n");
            break;
        }
        case 0 :{
            printf("Нет корней\n");
            break;
        }
        case 1:{
            printf("%lf\n", ans.b);
            break;
        }
        case 2:{
            printf("%lf %lf\n", ans.b, ans.c);
            break;
        }
    }
    return myfunc(2);
}
