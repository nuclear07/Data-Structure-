#include<stdio.h>
#include<conio.h>
int str_cat(char sou[],char dest[])
{
int i=0, j=0;
i = str_len(sou);
while(dest[j]!='\0')
	{
	sou[i]=dest[j];
	i++;
	j++;
	}
sou[i]='\0';
}
void main()
{
char a[20], b[10];
clrscr();
printf("enter string ");
gets(a);
printf("enter string ");
gets(b);
str_cat(a,b);
printf("sting is %s",a);
strcat(a,b);
printf("string is %s", a);
getch();
}