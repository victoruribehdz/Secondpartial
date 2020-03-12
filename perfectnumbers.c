#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main (){
	int total = 0;
	int numbers = 0,
	int i;
	int j;
	for (i = 1; j < i; j++){
		for (j = 0; j < i; j++){
			if (i%j==0){
				total += j;
			}
		}
		if (total==1){
			numbers++;
			printf("%d\n", i);
		}
	}
	printf ("There are%d\n", numbers);
}


