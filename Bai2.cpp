#include <stdio.h>
#include <conio.h>
int isHoanHao(int n);
int main(){
	int n,i;
	printf("Nhap so n: ");
	scanf("%d",&n);
	i++;
	do{
		if(isHoanHao(i)==1){
			printf("%d ",i);
		}
		i++;
	}while(i < n);
}
int isHoanHao(int n){
	int sum = 0;
	int result = 0;
	if(n > 0){
		for(int i = 1;i<=n/2;i++){
			if(n%i==0){
				sum += i;
			}
		}
		if(sum == n){
			result = 1;
		}
	}
	return result;
}
