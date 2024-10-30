#include<iostream>
using namespace std;

int main(){
	float radius =0;
	cin>>radius;
	const float PI=3.1415f;
	float area=PI*radius*radius;
	float circumference =2*PI*radius;

	cout<<"area is "<<area<<" and circumference is "<<circumference<<endl;
return 0;
}
