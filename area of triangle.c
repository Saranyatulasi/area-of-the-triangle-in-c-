#include<stdio.h>
#include<math.h>
int main ()
{
	int a=20,b=20,c=20,p,area;
	
	p=(a+b+c)/2;
	printf("the perimeter of the triangle is %d",p);
    
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\n the area of triangle is %d",area);
	
	
}