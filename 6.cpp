//Problem 6:
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<iostream>
#include<cmath>
using namespace std;

#define N 100
typedef long long ll;
int main(){
	
	ll squaresum,sumsquare;
	squaresum=(N*(N+1)*(2*N+1))/6;
	sumsquare=pow((N*(N+1))/2,2);
	
	cout<<sumsquare-squaresum;
	
	return 0;
}

