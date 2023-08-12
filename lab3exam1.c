#include<stdio.h>
int main()
{
    float a,b,c,d,ratio;
    printf("put the values of a,b,c,d=");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if((c-d)!=0)
    {
        ratio=(a-b)/(c-d);
        printf("The ratio is=%f",ratio);
    }
    else
        printf("invalid");
    return 0;
}
