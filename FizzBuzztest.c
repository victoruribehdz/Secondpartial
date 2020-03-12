#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char** argv) //argument count & argument vector
{
	int i;
	int num=atoi(argv[1]);
	for(i=0; i<argc; i++){
		printf("argv[%d] is %s \n", i, argv[1]);
	}

	printf("%d\n", num);
	return(0);
}
