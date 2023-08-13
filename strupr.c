#include<stdio.h>
#include<string.h>
main()
{
    char str1[10];
    int i;
    gets(str1);
    for (i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
            str1[i]=str1[i]-32
;
    }
    puts("String in upper\n");
    puts(str1);
    return 0;
}
