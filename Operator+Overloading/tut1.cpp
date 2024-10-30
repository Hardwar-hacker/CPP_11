#include<iostream>
using namespace std;

int volume(double r,int h){
	return (22/7)*r*r*h;
}
int volume(int a){
	return a*a*a;
}

int volume(int a,int b,int h){
	return a*b*h;
}
int sum (int a,int b){
	return a+b;
}


int sum(int a,int b,int c){

	return a+b+c;
}

int main(){
	cout<<sum(3,4)<<endl;
	cout<<sum(7,8,9)<<endl;
	cout<<"volume of cylinder is "<<volume(3,6)<<endl;
	cout<<"volume of cube is "<<volume(3)<<endl;
	cout<<"volume of cuboid is "<<volume(3,6,9)<<endl;

	return 0;
}