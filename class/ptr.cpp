#include<iostream>
int main(){
	int *p= new int[5];
	int arr[8]{1,2,3};
	for(int i:arr){
	std::cout<<arr[i]<<std::endl;
	}
	delete []p;
return 0;
}
