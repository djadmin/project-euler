//To find sum of multiples of 3 or 5 less than 1000
//Complexity: O(1)

#include<iostream>
#include<cmath>
using namespace std;

#define limit 1000

int summation(int num){
	int range=floor((limit-1)/num);
	return num*((range*(range+1))/2);
}
int main(){
	
	int sum=0;
	sum=summation(3)+summation(5)-summation(15);
	cout<<sum;
	return 0;
}

