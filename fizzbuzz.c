#include <stdio.h>
int main(void)
{
int i;
	for(i==1;i<=150;i++){
		if(i%3==0 && i%5==0){
			printf("Fizzbuzz\n");
		}else if(i%3==0){
			printf("Fizz\n");
		}else if(i%5==0){
			printf("Buzz\n");
		}else{
			 printf("%d\n",i);
		}
	}
}
