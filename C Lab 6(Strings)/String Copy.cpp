#include<stdio.h>

int main()
{
	char s1[100];
	printf("Enter a string s1:");
	scanf("%s",s1);
	
	char s2[100];
	printf("Enter a string s2:");
	scanf("%s",s2);
	
	for(int i=0;i<100;i++)
	s1[i]=s2[i];
	printf("\nS2 copied into s1.\nNow s1 is :%s",s1);
	return 0;
}
