/*Problem 15:
Starting in the top left corner of a 20×20 grid, and 
only being able to move to the right and down, find all possible routes to the bottom right corner.
*/

#include<iostream>

using namespace std; 

int main()
{
 	unsigned long long numerator=1;
 	unsigned long long denominator=1;
 	unsigned num[20];
 	unsigned den[20];

    for (int i = 40; i > 20; i--)  
    {                                    
        num[40-i] = i;
        den[40-i] = i - 20;
    
    }

    for(int i = 0; i < 20; i++)            //factorization
    {
        for(int j = 0; j < 20; j++)    
        {
            if(num[i] % den[j]==0)
            {
                num[i] = num[i] / den[j];
                den[j] = 1;
            }
        }    
	}

    for(int i = 0; i < 20; i++)
    {
       numerator *= num[i];
       denominator *= den[i];
    }

    cout << "Answer:" << numerator / denominator << endl;

    return 0;
}
