#include<iostream>
using namespace std;

int main(){
	int arr[4],brr[5];
	  cout<<"take arr \n";
	for(int i=0;i<4;i++){
		cin>>arr[i];
	}
	cout<<"take brr \n";
	for(auto x:brr){
		cin>>x;
	}

	for(auto x:arr){
	cout<<x<<" ";
	}
	cout<<endl;
	 for(auto x:brr){
        cout<<x<<" ";
        }


return 0;
}
