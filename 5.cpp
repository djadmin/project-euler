#include<iostream>
#include<cmath>		
#define N 20
using namespace std;
typedef long long LL;

LL gcd(LL a,LL b){
	if(b==0)
		return a;
	if(a<b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	gcd(b,a%b);
}

LL lcm(LL a,LL b){
	return (a*b)/gcd(a,b);	
}

int main(){
	LL ans=1;
	for(int i=2;i<=N;i++) ans=lcm(ans,i);
	cout<<ans;
	return 0;
}

