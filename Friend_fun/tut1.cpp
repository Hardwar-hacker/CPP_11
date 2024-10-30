#include<iostream>
using namespace std;

class Distance{
	int meter;
public:
 Distance(){
 	meter =0;
 }
 void displayData(){
 	cout<<"meter value :"<<meter<<endl;
 }
 //prototype 
 friend void addValue(Distance &d);
};


void addValue(Distance &d){
	d.meter=d.meter+5;
	cout<<"meter valiue in friend fun is "<<d.meter<<endl;
}

int main(){
	Distance d1;
	d1.displayData();


	//frien funcall
	addValue(d1);
	d1.displayData();  //  you can accerss all fun and data


	return 0;
}