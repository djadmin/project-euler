//Problem 10 
//To find the sum of all primes under 2,000,000.
#include<iostream>
using namespace std;
#define N 2000000

int main(){
	bool arr[N];
	long long int sum=0;
	
	//Sieve of Eratosthenes
	for(unsigned int i=2;i<=N;i++)
		arr[i]=1; 
	
	for(int i=2;i<N;i++){
		for(int j=2;(i*j)<=N;j++)
			arr[i*j]=0;
	}
	
	for(int i=2;i<=N;i++){
		if(arr[i]==1)
			sum+=i;
	}
	
	cout<<sum;
	return 0;
}

