#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j,len;
    gets(a);
    gets(b);
    len=strlen(a);
    for(i=len,j=0;b[j]!='\0';i++,j++)
    {
        a[i]=b[j];
    }
    a[i]='\0';
    printf("After concatenation=");
    puts(a);
    return 0;
}
