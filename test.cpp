#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;

    MyClass(int val) {
        ptr = new int(val);
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        ptr = new int(*other.ptr);
        cout << "Copy constructor\n";
    }

    // Copy assignment operator
    MyClass& operator=(const MyClass& other) {
        cout << "Copy assignment\n";
        if (this != &other) {
            delete ptr;               // Free existing memory
            ptr = new int(*other.ptr); // Allocate new memory and copy
        }
        return *this;
    }

    ~MyClass() {
        delete ptr;
    }
};

int main() {
MyClass a(5);         // ptr points to value 5
MyClass b = a;        // Copy constructor called, b.ptr points to new 5
MyClass c(10);        // c.ptr points to 10
c = a;

}