#include<stdio.h>
int main()
{
int a,b,c,max1,sm1;
scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		max1=a;
		sm1=b;
		}
	else {
		max1=b;
		sm1=a;
	    }
	
	 if(max1>c){
		if(c>sm1){
			printf("%d",c);
			}
		else{
		     printf("%d",sm1);
		    }
		}else{
		printf("%d",max1);
		}
	    
	   
	    
return 0 ;
}
	

