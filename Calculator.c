#include <stdio.h>
int main()
{
	printf("........WELCOME TO CALCULATOR........");
	printf("\n");
	int n=1,m;
	double a,b,res;
	printf("Enter first number.\n");
	scanf("%lf", &a);
	while(n!=0)
	{
		printf("Enter other number.\n");
		scanf("%lf", &b);
		printf("Enter 1 for add, 2 for sub, 3 for mul, 4 for divide.\n");
		scanf("%d", &m);
		switch(m)
		{
			case 1:
				res = a + b;
				a = res;
				printf("Sum = %f\n", res);
				break;
				
			case 2:
				res = a - b;
				a = res;
				printf("Substract = %f\n", res);
				break;
				
			case 3:
				res = a*b;
				a = res;
				printf("Multiply = %f\n", res);
				break;
				
			case 4:
				res = a/b;
				a = res;
				printf("Divide = %f\n", res);
				break;
				
			default :
				printf("Wrong input\n");
				break;
				
		}
		printf("\n");
		printf("Do you want to continue calculation?\n");
		printf("\n");
		printf("Enter 0 to exit or any other number to continue.\n");
		scanf("%d", &n);
		printf("\n");
	}
	printf("\n");
	printf("........THANK YOU........");
}
