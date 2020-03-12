#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char**argv)
{
	int i;
	float product;
	float x1= atof(argv[1]);
	float y1= atof(argv[2]);
	float z1= atof(argv[3]);
	float x2= atof(argv[4]);
	float y2= atof(argv[5]);
	float z2= atof(argv[6]);
	for(i = 1; i < argc; i++)
	{
		product= x1*x2 + y1*y2 + z1*z2;
	}
	printf("The product is %f\n", product);
return 0;
}
