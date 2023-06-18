#include<stdio.h>
#include<stdlib.h>

int fib(long long int n){
	static int a=0,b=1;
	int res = 0;
	res=a+b;
	a=b;
	b=res;
	return res;
}

int main(){
	for(long long int i=0;i<=8;i++){
		printf("%d ",fib(i));
	}
	// printf("%d",fib(10));

	return 0;
}
