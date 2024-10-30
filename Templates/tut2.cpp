#include<iostream>
using namespace std;
//class templates with multiple parameters

template<class T1,class T2>
class Myclass{
   
        T1 data1;
        T2 data2;
        public:
        void setvalue(T1 data1,T2 data2){
            this->data1=data1;
            this->data2=data2;
        }
        void display(){
            cout<<data1<<" "<<data2<<endl;
        }
    
    
};
int main(){
    Myclass<int ,char>obj;
    obj.setvalue(4,'r');
    obj.display();
  return 0;  
}