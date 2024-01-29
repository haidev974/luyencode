/*Hailun*/
#include <stdio.h>
#include <math.h>

void hoanvi(float *x1,float *x2)
{
    float t = *x1;
    *x1 = *x2;
    *x2= t;
}
float tinhptb2(float a,float b,float c, float *x1,float *x2)
{
    float denta;
    if(a==0 && b==0 && c==0){
        return 0;
    }else if(a==0 && b==0 && c!=0){
        return -1;
    }else if(a==0 && b!=0){
        *x1 = (float)-c/b;
        return 1;
    }
    denta = b*b - 4*a*c;
    if(denta < 0){
        return -1;
    }else if(denta == 0){
        *x1 = (float)-b/(2*a);
        return 1;
    }else{
        *x1 = (float)(-b+sqrt(denta))/(2*a);
        *x2 = (float)(-b-sqrt(denta))/(2*a);
        return 2;
    }
}

int main()
{
    float s,a,b,c;
    float x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    s = tinhptb2(a,b,c,&x1,&x2);
    if(s==-1){
        printf("NO");
    }else if(s==0){
        printf("WOW");
    }else if(s==1){
        printf("%.2f",x1);
    }else{
        if(x1>x2){
            hoanvi(&x1,&x2);
        } printf("%.2f %.2f",x1,x2);
    }
}
