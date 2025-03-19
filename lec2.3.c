#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c;
    float x1,x2,d;
    printf("1.sayıyı giriniz: ");
    scanf("%d",&a);
    printf("2.sayıyı giriniz: ");              
    scanf("%d",&b);
    printf("3.sayıyı giriniz: ");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        x1=(-b+sqrt(d))/(2*a);
        printf("x1: %f\n",x1);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1: %f\n",x1);
        printf("x2: %f\n",x2);
    }
    else
    {
        printf("Reel kök yoktur\n");
    }

 return 0;
}