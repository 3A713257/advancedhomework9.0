#include <stdio.h>
#include <stdlib.h>


int main() 
{
	for (;;)
	{
		int d=0,m=0,s=0;
		printf("Please enter a date(MM/DD):");
		scanf ("%d/%d",&m,&d);
		if ((d<=0||m<=0||d>31||m>12||((m==4||m==6||m==9||m==11)&&d>30)||(m==2&&d>29)))
			printf ("This date does not exist, please try again.\n");
		else
		{
			s=(m*2+d)%3;
			if (s==0)
			{
				printf ("%d/%d is 'NORMAL'.\n",m,d);
				break;
			}
			else if (s==1)
			{
				printf ("%d/%d is 'GOOD LUCK'.\n",m,d);
				break;
			}
			else
			{
				printf ("%d/%d is 'BIG GOOD LUCK'.\n",m,d);
				break;
			}
		}
		
	}
	
	system ("pause");
	return 0;
}
