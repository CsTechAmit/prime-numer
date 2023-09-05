// chek the number is prime or not 
#include<stdio.h>
 main()
{
	int i,num,d=0;
	printf("enter the number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)	
			d++;	
	}
	if(d==2)
		printf("enter the number is prime");
	else 
	printf("enter the number is not prime ");
	
}
