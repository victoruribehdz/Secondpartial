#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char**argv){
	int i;
	int num=atoi(argv[1]);
	int nume=atoi(argv[2]);
	for (i=num; i<nume;i++)
	{
		printf("%d\n", i);
	}
		return(0);
}
