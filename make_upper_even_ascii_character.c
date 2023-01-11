#include<stdio.h>

void make_upper(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]%2==0)
        {
            str[i]-=32;
        }
    }
    puts(str);
}

int main()
{
    char str[20];
    scanf("%s",str);
    make_upper(str);

    return 0;
}
