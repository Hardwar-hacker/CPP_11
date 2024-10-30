#include<iostream>
using namespace std;
int main(){
	//scalar type
	int i;
	float f(1.4345f);
	int ch{'a'};
	bool flag (false);
	cout<< i<<endl;
	cout<<"f:"<<f<<endl;
	cout<<"flag::"<<flag<<endl;
	cout<<"ch"<<ch<<endl;

	//vector type
	int ar1r[5];
	int arr[5]{1,2,3};
for(int i=0;i<5;i++){
	cout<<"arr1 "<<ar1r[i]<<endl;
	cout<<"arr "<<arr[i]<<endl;
}
return 0;
}
