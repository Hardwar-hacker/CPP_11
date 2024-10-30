#include<iostream>
using namespace std;

/*we need to define 2 extra functions for
diff datatype of parameter
float funcAvg(int a,int b){
    float avg=(a+b)/2.0;
    return avg;
}
float funcAvg(int a,float b){
    float avg=(a+b)/2;
    return avg;
}*/

template<class T>
void swapp(T &a,T &b){   //swap is present in namespace
    cout<<"Before swap "<<a<<" "<<b<<endl;
    T temp=a;
    a=b;
    b=temp;
    cout<<"After swap "<<a<<" "<<b<<endl;
}
template<class T1 ,class T2>
float funcAvg(T1 a,T2 b){
    float avg=(a+b)/2;
    return avg;
}
int main(){
    float a=funcAvg(5,2);
    int r=5,y=8;
    swapp(r,y);
    // printf("the avg is %0.3f",funcAvg(5,2));
    cout<<"the avg is "<<funcAvg(5,2)<<endl;
    cout<<"the avg is "<<funcAvg(7.9,2)<<endl;
    return 0;
}