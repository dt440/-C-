#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("input a,b,c:");
	scanf("%d,%d,%d", &a, &b, &c);
	double t,d,x1,x2;
	d = (b * b) - (4 * a * c);
	t = sqrt(d);
	x1 = (-b + t) / (2 * a);
	x2 = (-b - t) / (2 * a);
	if (a == 0)
	{
		printf("The equation is not quadratic");
	}
	else
	{
		if (d > 0)
		{
			printf("The equation has distinct real roots:\n%.4f and %.4f", x1, x2);
		}
		else if (d == 0)
		{
			printf("The equation has two equal roots:%.4f", x1);
		}
		else
		{
			double	re = -b/(2.0*a);
		    double	i = sqrt(-d)/(2*a);
			printf("The equation has complex roots:\n");
			printf("%.4f + %.4fi\n", re, i);
			printf("%.4f - %.4fi\n", re, i);
		}
	}

	return 0;
}