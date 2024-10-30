#include<iostream>
#include <limits>
using namespace std;

int ProcessRecords(int count ){
	int  *pArray =(int *)malloc(count * sizeof(int));
	if(!pArray){
		std::cout<<"falied to alloacete memory"<<endl;
		return -1;
	}

	for(int i=0;i<count;i++){
    	pArray[i]=i;
	}
	cout<<"memory allocation succesful\n";

	/*for(int i=0;i<count;i++){
    	cout<<pArray[i]<<endl;
	}*/
	free(pArray);
	return 0;
}

int main(){
	ProcessRecords(numeric_limits<int>::max());
	return 0;
}