#include <stdio.h>
int main()
{
	float pie=3.14;
	int radius;
	printf(" enter the radius of cicle");
	scanf("%d",&radius);
	printf(" the radius of the circle is %d\n",radius);
	float area = (float)(pie*radius*radius);
	printf("the area of the given circle is %f",area);
}