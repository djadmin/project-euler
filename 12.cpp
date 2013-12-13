#include<iostream>
using namespace std;

int getDivisors(int num){
	
	int prod=1;
	int i=2;
	int count;
	while(num>1){
		count=0;
		while(num%i==0){
			count++;
			num/=i;
		}
		prod*=(count+1);
		i++;
	}
	return prod;
}
int main(){
	
	int tno;
	int n=1;
	while(1){
		tno=(n*(n-1))/2;
		if(getDivisors(tno)>500)
			break;
		n++;
	}
	
	cout<<tno;
	
	return 0;
}

