#include<stdio.h>

//Scan two positive integers from user, compute their greatest common divisor (GCD) using a loop and print the GCD on console. 
 
int main(){
	
	int a,b;
	int i;
	int gcd =2;
	
	printf("Please enter two numbers:");
	scanf("%d%d",&a,&b);
	
	for(i=2;i<15;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	
	printf("GCD:%d",gcd);

	
	return 0;
}


