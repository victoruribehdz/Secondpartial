#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main (){
	int i;
	int years = 0;
	for (i=1500; i<=2100; i++){
		if ((i%4==0) || (i%400==0) && (i%100!=0)){
		printf("%d\n", i);
		printf("Es un ano bis\n");
		years++;
		}
	}
	
	printf ("Hay %d\n", years);
	return 0;
}

