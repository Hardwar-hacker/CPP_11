#include<iostream>
#include "car.h"

Car(){
	 std::cout<<1<<std::endl;
                }
~Car(){
	std::cout<<0<<std::endl;
              }


void car::fillfuel(float amount){
        fuel=amount;
}
void car::Accelerete(){
        speed++;
        fuel -= 0.5f;
}
void car::brake(){
        speed=0;
}
void car::Addpassen(int count){
        passen=count;
}
void car::Dashboard(){
        std::cout<<"fuel :"<<fuel<<std::endl;
          std::cout<<"speed :"<<speed <<std::endl;
          std::cout<<"passen :"<<passen<<std::endl;
}
