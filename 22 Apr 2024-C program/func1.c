#include<stdio.h>
double mypow(double base,int expo);
int main()
{
	double base;
	int expo,power;
	printf("Enter the Base\n");
	scanf("%lf",&base);
	printf("Enter the exponent\n");
	scanf("%d",&expo);
	power=mypow(base,expo);
	printf("The power is %d",power);
	return 0;
	
}

double mypow(double base,int expo)
{
	if(expo==0)
		return 1;
	else if(expo>0)
		return base* mypow(base,expo-1);
	else
		return 1/ mypow(base,-expo);
}
