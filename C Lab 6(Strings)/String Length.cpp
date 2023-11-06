#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter a string :");
	scanf("%s",&s);
	
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("The length of the given string is %d",i);
	return 0;	
}
