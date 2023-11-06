#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter a string :");
	scanf("%s",s);
	
	for(int i=0;i<100;i++)
	{
		if(s[i]>=65&&s[i]<=91)
		s[i]=s[i]+32;
	}
	printf("\nThe lowercase string : %s",s);
	return 0;
}
