#include<iostream>
#include <limits>
using namespace std;

int ProcessRecords(int count ){
	int  *pArray =(int *)malloc(count * sizeof(int));
	if(pArray==nullptr){
		throw runtime_error("failed memory allocation \n");  //here control will never return back
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
    try {
	ProcessRecords(numeric_limits<int>::max());
    }
    catch(std::runtime_error &ex)  // we take reference because we do't want copy creation
    {
        cout<<ex.what()<<endl;          //what fun contains  a string that tells us more about exception
        
    }
	return 0;
}