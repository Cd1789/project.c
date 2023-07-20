#include <stdio.h>
int main()
{
	int length, breadth, area;
	printf("\nenter the length of rectangel:");
	scanf("%d", & length);
	
	printf("\nenter the breadth of rectangel:");
	scanf("%d", &breadth);
	
	area = length * breadth;
	printf("\n area of rectangel : %d" , area);
	
	return(0);
}