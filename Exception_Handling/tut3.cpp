#include<iostream>
#include <limits>
using namespace std;

int ProcessRecords(int count ){
    
    if(count<10)
        throw out_of_range("count should be greater than 10");
        
        int *p = new int[count];      //new throws error bad_alloc 
    
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
    delete p;
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
     catch(std::out_of_range &ex)  // we take reference because we do't want copy creation
    {
        cout<<ex.what()<<endl;          //what fun contains  a string that tells us more about exception
        
    }
     catch(std::bad_alloc &ex)  // we take reference because we do't want copy creation
    {
        cout<<ex.what()<<endl;          //what fun contains  a string that tells us more about exception
        
    }
	return 0;
}