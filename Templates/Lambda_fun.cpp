#include <iostream>
#include <string>

int main() {
    /******************************************************************************************              
                                             c++14
    ********************************************************************************************/
    // auto add=[](auto a,auto b){return a+b;};
    
    /******************************************************************************************              
                                             c++11 
    ********************************************************************************************/
    // Lambda function that adds two integers
    auto addIntegers = [](int a, int b) { return a + b; };

    // Lambda function that concatenates two strings
    auto addStrings = [](const std::string& str1, const std::string& str2) {
        return str1 + str2;
    };

    int a = 2, b = 3;
    std::string str1 = "Akshata", str2 = " Dhavale";

    // Using the lambda functions
    std::cout << "a + b = " << addIntegers(a, b) << std::endl;
    std::cout << "str1 + str2 = " << addStrings(str1, str2) << std::endl;

    return 0;
}