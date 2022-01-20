#include<iostream>
#include<bitset>
using namespace std;
void siveoferatosthnes(int num)
{ 
	bool prime[num+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=num; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=num; i += p) 
				prime[i] = false; 
		} 
	} 
	for (int j=2; j<=num; j++) 
	if (prime[j]) 
		cout << j << " "; 
} 

int main() 
{ 
	int n=20;
	siveoferatosthnes(n); 
	return 0; 
}