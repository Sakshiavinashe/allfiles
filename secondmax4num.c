#include<stdio.h>
int main()
{
int a,b,c,d,max1,sm1,max2,sm2;
scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b){
	  max1=a;
	  sm1=b;
	  }
	 else{
	 max1=b;
	 sm1=a;
	 }
	 
	if(c>d){
	  max2=c;
	  sm2=d;
	  }
	 else{
	 max2=d;
	 sm2=c;
	 }
	 
	 if(max1>max2){
	 	if(max2>sm1){
	 	printf("%d",max2);
	 	}
	 	else{
	 	printf("%d",sm1);
	 	}
	 }
	 else{
		 if(max1>sm2){
		 printf("%d",max1);
		 }
		 else{
		 printf("%d",sm2);
		 }
	   }
return 0;
}
	 
