#include<stdio.h>
int main()
{
    int a=1;
    int b=2;
    int *const p=&a;
    printf("%d %u  %u\n",*p,p,&a);
    *p=90;
    printf("%d %u\n",*p,p);
    return 0;
}
