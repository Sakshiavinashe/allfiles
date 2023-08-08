#include<stdio.h>
int main()
{
int age ,days ,w;
char sex;
printf("Enter the age,days &sex");
scanf("%d %d %c",&age,&days,&sex);
    if(age>=18 && age<=30)
	{
		if(sex=='m')
		{
		     w =700*days;
		     printf("Total wage is :%d",w);
		}
		else{
		       w=750*days;
		       printf("total wage is:%d",w);
		    }
	}
   else{
           if(age>=30 && age<=40)
	{
			if(sex=='m')
			{
				w=800*days;
				printf("total wage is :%d",w);
			}
			else
			{
				w=850*days;
				printf("total wage is :%d",w);
			}
	}
			else
				{
				printf("enter approprite age");
				}
				}
	return 0;
			}
