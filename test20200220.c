#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) //argument count & argument vector
{
	int i;
	for(i=0; i<argc; i++){
		printf("argv[%d] is %s \n",i, argv[i]);
	}
	return(0);
}
