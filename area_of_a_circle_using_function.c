#include<stdio.h>

void area_of_circle(int r)
{
    printf("%f",3.1416*(float)(r*r));
}

int main()
{
    int r;
    scanf("%d",&r);
    area_of_circle(r);
    return 0;
}
