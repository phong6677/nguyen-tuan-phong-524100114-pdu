#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n phan tu: ";
	cin>>n;
		if(n<0){
			cout<<"nhap lai";}
	int a [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		int max=0;
		for(int i=0;i<n;i++){
                	if(a[i]%3==0&&a[i]>max){
                		max=a[i];}}
                		cout<<"so lon nhat chia cho 3 la "<<max;
                		
                		
			}
