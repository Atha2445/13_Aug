#include<stdio.h>
#include<conio.h>
void ftoa(float f1,char s[])
{
    sprintf(s,"%f",f1);
}
int main()
{
    char str[20];
    float f=12.64;
    ftoa(f,str);
    printf("\n\n%s\n\n",str);
    return 0;

}
