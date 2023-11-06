#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter a string:");
	scanf("%s",s);
	
	int i=0;
	while(s[i]!='\0')
	i++;
	
	printf("%d",i);
	for(int j=0;j<i/2;j++)
	{
		int t=s[i-j-1];
		s[i-j-1]=s[j];
		s[j]=t;
	}
	printf("\nThe reversed string is : %s",s);
	return 0;
	
}
