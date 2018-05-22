#include<stdio.h>
#include<math.h>
int main()
{
	int j;
	float i,n,f1,pi,fact, sum=1, ser;
	printf("\n Enter the number of iterations:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		f1=pow(-1,i);
			fact=(2*i)+1;

		ser=f1/fact;
		sum=sum+ser;
	}
	pi=4*sum;
	printf("%f is the approximate value of pi.",pi);
	return 0;
}
