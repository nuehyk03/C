# include <stdio.h>

int main()
{
	int s,e,i,j;
	
	
	while(1)
	{
		scanf("%d %d",&s,&e);
		
		if(s >= 2 && e >=2 && s<=9 && e<=9)
			break;
		else
			printf("INPUT ERROR!\n");
	}
	
	if(s < e)
	{
		for(i = 1; i<=9; i++)
		{
			for(j = s; j<=e; j++)
			{
				printf("%d * %d = %2d   ",j,i,j*i);
			}
			printf("\n");
		}
	}
	
	else
	{
		for(i = 1; i<=9; i++)
		{
			for(j = s; j>=e; j--)
			{
				printf("%d * %d = %2d   ",j,i,j*i);
			}
			printf("\n");
		}
	}
	
	return 0;
}
 
