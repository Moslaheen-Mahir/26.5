#include<stdio.h>
int main()
{
    int a, b;
    float avg;
    scanf("%d %d",&a,&b);
    int* n=&a,* m=&b;
    avg = (float)(*n + *m) / 2;
    printf("%f",avg);
}
