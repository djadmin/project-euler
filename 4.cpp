//Problem 4
//Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
#include<cmath>
#define N 3
using namespace std;

//checking palindrome by reversing the number
int palindrome(int num){
	int temp=num;
	int rev=0;
	while(temp>0){
		rev=rev*10+temp%10;
		temp/=10;
	}
	if(rev==num)
		return 1;
	else
		return 0;
}

int main(){
	int num;	
	int max=0;
	int high=pow(10,N)-1; 	// Higher Limit - 10^3-1=999
	int low=pow(10,N-1);	// Lower Limit  - 10^2= 100
	for(int i=high;i>low;i--){
		for(int j=high;j>low;j--){
			int mul=i*j;
			if(mul>max && palindrome(mul)==1){
				max=mul;
			}
		}
	}
	cout<<max;
	return 0;
}

