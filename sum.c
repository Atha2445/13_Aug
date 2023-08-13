#include<stdio.h>
int main()
{
    int a,b,sum;
    int *p,*q,*s;
    p=&a;
    q=&b;
    s=&sum;
    scanf("%d%d",p,q);//instead of &a and &b we use p and q respectively.
    *s =*p+*q; // instead of sum=a+b we write in this way,
    printf("Sum=%d",*s);

return 0;
}
