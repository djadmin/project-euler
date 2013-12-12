#include<iostream>
using namespace std;
#define N 500

int calc(){
	int a,b;
	for(int i=1;i<N;i++){
			for(int j=i+1;j<N;j++){
				if(2000*(i+j)-2*i*j==1000000){
					a=i;b=j;
					return a*b*(1000-a-b);
				}
					
			}
	}
}
int main(){
	int res;
	res=calc();
	cout<<res;

	return 0;
}

