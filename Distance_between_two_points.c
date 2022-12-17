#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	e=sqrt(pow((c-a),2)+pow((d-b),2));
	
	printf("%.4f",e);
}