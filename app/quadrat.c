#include <stdio.h>
#include <math.h>
#include "quadrat.h"

qans quadrat(int a, int b, int c){
    qans ans;
    if((a == b) && (b == 0)){
        ans.a = -1;
        return ans;
    }
    if(a == 0){
        ans.a = 1;
        ans.b = -(double)c/(double)b;
        return ans;
    }
    double d = b*b - 4*a*c;
    if(d < 0){
        ans.a = 0;
        return ans;
    }
    if(d == 0.){
        ans.a = 1;
        ans.b = -(double)b/(2.*(double)a);
        return ans;
    }
    d = sqrt(d);
    ans.a = 2;
    ans.b = (double)(-b+d)/(2.*(double)a);
    ans.c = (double)(-b-d)/(2.*(double)a);
    return ans;
}
