/*Longest Collatz Sequence
n → n/2 (n is even)
n → 3n + 1 (n is odd)
Which starting number, under one million, produces the longest chain?
*/

#include<iostream>
using namespace std;

int main(){
	
	unsigned long maxNo=999999;
	int maxCount,count=0;
	for(int i=999999;i>1;i--){
		unsigned n=i;
		count=1;
		while(n>1){
				if(n%2==0)
					n=n/2;	
				else
					n=3*n+1;
				count++;
		}
			
		if(maxCount<count){
			maxNo=i;
			maxCount=count;
		}
			
	}
	cout<<maxCount<<" no of chain which starts from "<<maxNo;
	return 0;
}

