#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char**argv)
{
	int i;
	float vector[50000];
	float max;
	float min;
	float prom;
	max= atof(argv[1]);
	min= atof(argv[2]);
	for(i = 1; i <argc; i++)
	{
		vector[i]=atof(argv[i]),
		printf("%f\n", vector[i]);
		prom= prom + vector[i];
		if(vector[i] > max)
			max= vector[i];
		if(vector[i] < min)
			min= vector[i];
	}
	printf("min= %f\n", min);
	printf("max= %f\n", max);
	printf("prom= %f\n", prom/(i-1));
return 0;
}
