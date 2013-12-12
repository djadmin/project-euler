#include<iostream>
using namespace std;

const unsigned int LIMIT = 150000;
const unsigned int N = 10001;
int main(){
	unsigned int count=0;
	unsigned int primes[LIMIT]={0};
	for(int i=2;i<LIMIT;i++){
		for(int j=2;i*j<LIMIT;j++){
			primes[i*j]=1;
		}
	}
	
	for(int i=2;i<LIMIT;i++){
		if(!primes[i])
			count++;
		if(count==N)
		{
			cout<<i;
			return 0;
		}
				
	}
	return 0;
}

