#include<stdio.h>
int len(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char s1[100];
	printf("Enter a string s1:");
	scanf("%s",s1);
	
	char s2[100];
	printf("Enter a string s2:");
	scanf("%s",s2);
	
	int l1=len(s1);
	int l2=len(s2);
	
	for(int i=0;i<l2;i++)
	{
		s1[l1+i]=s2[i];
	}
	printf("\nS2 added into s1.\n\nNow s1 is :%s",s1);
	return 0;
}
