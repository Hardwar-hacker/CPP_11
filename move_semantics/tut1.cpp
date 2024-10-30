#include<iostream>
#include"Integer.h"
#include"Integer.cpp"

Integer Add(const Integer &a, const Integer &b) {
    return Integer(a.GetValue() + b.GetValue());  // Directly return an Integer object
}

int main() {
    Integer a(1), b(3);
    a.SetValue(Add(a, b).GetValue());  // Add the values and set the result in 'a'
    return 0;
}

