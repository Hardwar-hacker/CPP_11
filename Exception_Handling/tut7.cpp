#include<iostream>
#include <vector>
#include <limits>
using namespace std;

int ProcessRecords(int count ){
    
    if(count<10)
        throw out_of_range("count should be greater than 10");

    //in case of p and pArray we are trying to create dynamic array 
    // but when malloc fails to alloacate memory memory lekage happens
    vector<int >p;
    p.reserve(count);    //reserve internally allocate memory ,malloc fun is there

    vector<int >pArray;
    pArray.reserve(count);

    for(int i=0;i<count;i++){
        pArray.push_back(i);
    }
	cout<<"memory allocation succesful\n";

	/*for(int i=0;i<count;i++){
    	cout<<pArray[i]<<endl;
	}*/
	return 0;
}

int main(){
    try {
	ProcessRecords(numeric_limits<int>::max());
    }
    catch(exception &ex)  // we take reference because we do't want copy creation
    {
        cout<<ex.what()<<endl;          //what fun contains  a string that tells us more about exception
        
    }
	return 0;
}