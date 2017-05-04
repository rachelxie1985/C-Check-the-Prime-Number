#include <stdio.h>
int primeCheck(int n);
int num, flag;

int main() {
	printf("Please enter an integer.\n");
	scanf("%d", &num);
	flag = primeCheck(num);
	if(flag == 1){
		printf("%d is a prime number.", num);
	}else{
		printf("%d is NOT a prime number.", num);
	}
}

int primeCheck(int n){
	int i, remain;
	for(i=2; i<=num/2; i++){
		remain = num%i;
		if(remain == 0){
			return 0;
		}
	}
	return 1;
}