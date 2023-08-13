#include<stdio.h>
#include<stdio.h>
int main()
{
    int a=123;
    char str[100];
    itoa(a,str,2);
    printf("\nBinary value:%s",str);
    itoa(a,str,10);
    printf("\nDecimal value:%s",str);

}
