
#include <iostream>
using namespace std;

class Vector {
    int *arr;
    int size;
public:
    // Constructor
    Vector(int m) {
        size = m;
        arr = new int[size]();  // Initialize with zeros
    }

    // Destructor
    ~Vector() {
        delete[] arr;  // Free allocated memory
    }

    // Function to set values
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    // Dot product function
    int dotProduct(const Vector &v) {
        int d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    Vector v1(3);
    v1.setValue(0, 12);
    v1.setValue(1, 5);
    v1.setValue(2, 3);

    Vector v2(3);
    v2.setValue(0, 1);
    v2.setValue(1, 2);
    v2.setValue(2, 3);

    int d = v1.dotProduct(v2);
    cout << "Dot product is " << d << endl;

    return 0;
}
