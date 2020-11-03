#include<stdio.h>
int main()
{
	char n[10];
	char m[10];
	int i;

	printf("enter the first string");
	scanf("%s",n);
	printf("enter the second string");
	scanf("%s",m);
	i=0;
	while(n[i]!='\0')
	{
		n[i]=m[i];
		i++;
	}
	printf("%s",n);
}
