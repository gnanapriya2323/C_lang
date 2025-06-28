#include<stdio.h>
int main()
{
	int a,b,result;
	printf("a is :");
	scanf("%d",&a);
	
	printf("b is:");
	scanf("%d",&b);

	result=a+b;
	printf("a+b value is:%d\n",result);
	
	result=a-b;
	printf("a-b value is:%d\n",result);
	
	result=a**b;
	printf("a*b value is:%d\n",result);
	
	result=a/b;
	printf("a/b value is:%d\n",result);

		
	result=a%b; 
	printf("a%b value is:%d\n",result);
	return 0;
}

	

	