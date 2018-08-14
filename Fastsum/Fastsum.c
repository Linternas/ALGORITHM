#include <stdio.h>
int fastSum(int n){
    if (n == 1){ //1일경우
        return 1;
    }
    if (n % 2 == 1) { //홀수일경우
        return fastSum(n-1) + n;
    }
    return 2 * fastSum(n/2) + (n/2)*(n/2); //짝수일경우
	}

int main(){
	int a;
	scanf("%d",&a);
	printf("%d",fastSum(a));
}
