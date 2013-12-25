//Problem 18: Maximum path sum 
/*By starting at the top of the triangle below and moving to adjacent numbers on the row below, 
find the maximum total from top to bottom */

#include<iostream>
using namespace std;

const int ROWS=15;

int max(int a ,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	int arr[ROWS][ROWS]={
						{75},
						{95,64},
						{17,47,82},
						{18,35,87,10},
						{20,4,82,47,65},
						{19,1,23,75,03,34},
						{88,2,77,73,07,63,67},
						{99,65,4,28,06,16,70,92},
						{41,41,26,56,83,40,80,70,33},
						{41,48,72,33,47,32,37,16,94,29},
						{53,71,44,65,25,43,91,52,97,51,14},
						{70,11,33,28,77,73,17,78,39,68,17,57},
						{91,71,52,38,17,14,91,43,58,50,27,29,48},
						{63,66,4,68,89,53,67,30,73,16,69,87,40,31},
						{4,62,98,27,23,9,70,98,73,93,38,53,60,04,23}
	};
	int M[ROWS][ROWS];
	M[0][0]=arr[0][0];
	int res=0;
	for(int i=1;i<ROWS;i++){
		for(int j=0;j<=i;j++){
			if(j==0)
				M[i][j]=arr[i][j] + M[i-1][j];
			else if(j==i)
				M[i][j]=arr[i][j] + M[i-1][j-1];
			else
				M[i][j]=arr[i][j]+max(M[i-1][j-1],M[i-1][j]);
			
		}
	}
	
	for(int j=0;j<ROWS;j++){
		if(res<M[ROWS-1][j])
			res=M[ROWS-1][j];
		
	}
	cout<<res<<endl;
	


	return 0;
}

