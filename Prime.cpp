#include<iostream>
#include<string>
#include<cmath>
int isPrime[3000000];
using namespace std;
int main(void){
	long long int num = 600851475143;
	int root = sqrt(num);
	isPrime[2] = 1;
	for(int i=0;i<3000000;i++) isPrime[i] = 1;
	for(long long int i=2;i*i<=num;i++){
		if(isPrime[i]){
			for(int j=2*i;j<=root;j+=i)
				isPrime[j] = 0;
		}
	}
	for(int i=2;i<776300;i++)
		if(isPrime[i]) {
			if(num%i==0)
				cout<<i<<endl;
		}
	return 0;
}
