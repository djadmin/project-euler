#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;
int main(){
	
	bool flag=false;
	ll num=600851475143,fact=2;
	ll max=2;
	
	while(num>1 && num%fact==0)
			num/=fact;
	fact=3;
	while(num>1){
		while(num%fact==0){
			flag=true;
			num/=fact;
		
		if(flag==true && max<fact)
				max=fact;
		}
		flag=false;
		fact+=2;
	}
	cout<<max;
	
	return 0;
}

