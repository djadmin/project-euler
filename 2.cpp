#include<iostream>
#include<cmath>
using namespace std;

const long double PHI= (1+sqrt(5))/2.0;
const long double SHI=(1-sqrt(5))/2.0;

long long int fib(int i){
	return (pow(PHI,i)-pow(SHI,i))/sqrt(5);
}
int main(){
	long long int sum=0,term=0;
	int i=3;
	while((term=fib(i))<=4000000){
		sum+=term;
		i+=3;
	}
	
	cout<<sum;
	return 0;
}

