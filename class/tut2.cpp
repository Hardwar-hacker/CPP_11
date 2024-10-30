#include<iostream>
using namespace std;
class shop{
	int id;
	float price;
	public:

	void setdata(int a,float b){
		id=a;
		price=b;
	}
	void getdata(){
		cout<<"code of this item "<< id<<endl;
		cout<<"price of item is"<<price<<endl;
	}
};
int main(){

	//general_store
	//veggies
	//hardware
	int p;
	float q;
	shop *ptr=new shop[3];
	shop *temp=ptr;
	for(int i=0;i<3;i++){
		cout<<"enter id and price :";
		cin>>p>>q;
		//*(Ptr).getdata();
		(ptr)->setdata(p,q);
		ptr++;
	}

	for(int i=0;i<3;i++){
		temp->getdata();
		temp++;
	}



return 0;
}
