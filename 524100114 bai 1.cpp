#include<iostream>
using namespace std;
int snt(int n){
	if(n<2)
	return 0;
	else if(n>=2)
		for(int i=2;i*i<=n;i++)
			if(n%i==0)
				return 0;
			return 1;
		}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	if (snt(i))
	cout<<i<<" ";
else{
	cout<<" ";
}}
	
