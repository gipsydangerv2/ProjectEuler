#include<iostream>
#include<string>
#include<cmath>
int isPrime[4000000];
int prime[1000000];
using namespace std;
int main(void){
	long long int num = 4000000000000;
	int root = sqrt(num);
	cout<<"Root:"<<root;
	isPrime[2] = 1;
	int k=0;
	for(int i=0;i<4000000;i++) isPrime[i] = 1;
	for(long long int i=2;i*i<=num;i++){
		if(isPrime[i]){
			//cout<<"isPrime:"<<i<<endl;
			prime[k++]=i;
			for(long long int j=2*i;j<4000000;j+=i)
				isPrime[j] = 0;
		}
	}
	long long int sum =0;
	cout<<"k:"<<k-1<<endl;
	for(int i=0;i<k;i++){
		sum = sum + prime[i];
		//cout<<sum<<endl;
	}
	cout<<"sum is"<<sum<<endl;
	/*for(int i=2;i<776300;i++)
		if(isPrime[i]) {
			cout<<i<<endl;
		}*/
	return 0;
}
