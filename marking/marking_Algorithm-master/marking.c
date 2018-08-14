#include <stdio.h>
#include <string.h>
	int main(){
		char a[100]={};
		int length;
		char str1[] = "o";
   	char str2[] = "x";
   	int count=0;
   	int sum=0;

		scanf("%s",a);

		length = strlen(a);

		for(int i=0; i<=length; i++){
			if(a[i] == str1[0]){//배열안의 값이 o일 경우 count값 증가
				count++;
				sum = sum + count;
			}else if(a[i] == str2[0]){//배열안의 값이 x일 경우 count값 초기화
  				count = NULL;
		}
	}
		printf("%d",sum);
		return 0;
} 
