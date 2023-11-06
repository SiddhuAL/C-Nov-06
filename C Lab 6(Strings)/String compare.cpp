#include<stdio.h>
int compare(char s1[],char s2[])
	{
		int k;
		for(int i=0;i<sizeof(s1);i++)
		{
			if(s1[i]==s2[i])
			k=1;
			else 
			{
				k=0;
				break;
			}
		}
		return k;	
	}

int main()
{
	char s1[100];
	printf("Enter 1 string :");
	scanf("%s",s1);
	
	char s2[100];
	printf("Enter 2 string :");
	scanf("%s",s2);
	
	if(compare(s1,s2))
	printf("Equal");
	else
	printf("Not Equal");
	return 0;

}
