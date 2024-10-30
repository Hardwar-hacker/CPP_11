#include <iostream>
class Integer {
	int m_Value{ 0 };
public:
	Integer() = default;
//	Integer() {
//		m_Value = 0;
//		std::cout<<"default ";
//	}
	Integer(int value) {
		m_Value = value;
		std::cout<<"parameterized";
	}
	Integer(const Integer &) = delete;
	void SetValue(int value) {
		m_Value = value;
	}
	void SetValue(float){
		std::cout<<"setvalue";
	}
};

int main() { 
	Integer i1; //instace of class and object to  default constructor invoke
	Integer i2(5);
	i1.SetValue(5);
	//Error as SetValue(float) is deleted
	i1.SetValue(67.1f);
	return 0;
}
