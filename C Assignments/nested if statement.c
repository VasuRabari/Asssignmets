#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is largest number");
		}
		else
		{
			printf("\nC is largest number");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB is largest number");
		}
		else
		{
			printf("\nC is largest number");
		}
		}
	}
