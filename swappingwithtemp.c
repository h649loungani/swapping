#include<stdio.h>

int main()
{
	double first,second,temp;
	printf("\n enter first no:");
	scanf("%lf",&first);
	printf("\n enter second no:");
	scanf("%lf",&second);
	//value of first assigned to temp
	temp=first;
	//value of seconf is assigned to first
	first=second;
	//value of temp is assigned to second 
	second=temp;
	
	printf("\n after swapping,firtnumber=%2lf\n",first);
	printf("\n after swapping,second number=%2lf",second);
	return 0;
}
