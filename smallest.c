#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(b>c)
		{
			if(c>d)
		{
			printf("%d is smallest",d);
		}
			else
		{
			printf("%d is smallest",c);
		}
		}	
		else
			{
				if(b>d)
				{
					printf("%d is smallest",d);
				}
				else 
				{
					printf("%d is smallest",b);
				}	
			}
	}
	else 
	{
		if(a>c)
		{
			if(c>b)
		{
			printf("%d is smallest",b);
		}
			else
		{
			printf("%d is smallest",c);
		}
		}
		else
		{
			if(a>d)
			{
				printf("%d is smallest",d);
			}
				else
			{
				printf("%d is smallest",a);
			}
		}

	}
return 0;
}

