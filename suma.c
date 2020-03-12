#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int add_three_int(int x,int y,int z)
{
	return x + y + z;
}

int main(int argc, char** argv)
{
	int i;
	int x= atoi(argv[1]);
	int y= atoi(argv[2]);
	int z= atoi(argv[3]);
		printf("the sum is %d \n", add_three_int(x,y,z));
	}

