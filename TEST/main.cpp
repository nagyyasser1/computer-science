#include <iostream>
#include <memory>
class MyClass
{
public:
    int i;
    MyClass()
    { // Constructor
        std::cout << "\n created\n";
    }
    ~MyClass()
    { // Destructor
        std::cout << "\n destroyed\n";
    }
};
int main()
{
    if (true)
    {
        // Scope of the following MyClass object is this if-block
        std::unique_ptr<MyClass> ptr(new MyClass());

        ptr->i = 5;
        std::cout << "\n"
                  << ptr->i << "\n";
    }
    // The pointer gets deallocated automatically at this point.
    // Thus, the destructor of MyClass is called here.
    return 0;
}