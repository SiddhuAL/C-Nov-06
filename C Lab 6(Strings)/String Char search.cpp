#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter a string:");
	scanf("%s",s);
	
	char x;
	printf("\nEnter the character you wanna check:");
	scanf(" %c",&x);
	
	int j=-1;
	for(int i=0;i<100;i++)
	{
		if(s[i]==x)
		{
			j=i;
			break;
		}
	}
	if(j!=-1) printf("\nThe char %c is occured at index %d.",x,j);
	else printf("\nThe char %c is not found",x);
	return 0;

}
