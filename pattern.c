#include<stdio.h>

void main()

{
	int i,j;
	char ch='A',ch1='B';
	for(i=1;i<=4;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
					printf("%c",ch);
				else
					printf("%c",ch1);	
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
					printf("%c",ch1);
				else
					printf("%c",ch);	
			}
			printf("\n");
		}
	}
}

