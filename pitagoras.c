#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
float distance(float x, float y)
{
	return sqrt(x*x + y*y);
}
int main(int argc, char** argv)
{
	//int i;
	float x= atof(argv[1]);
	float y= atof(argv[2]);
		printf("the hyp is %f\n", distance(x,y));
	return (0);
}
