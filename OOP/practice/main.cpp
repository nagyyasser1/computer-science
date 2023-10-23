#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, height;

public:
    Rectangle();

    void setLength(float len);
    float getLength();
    ~Rectangle();
};

Rectangle::Rectangle()
{
    length = 0.0;
    height = 0.0;
}

void Rectangle::setLength(float len)
{
    if (len >= 0.0)
    {
        length = len;
    }
    else
    {
        cout << "Length cannot be negative." << endl;
    }
}

float Rectangle::getLength() // Method definition to get the length
{
    return length;
}

Rectangle::~Rectangle()
{
}

int main()
{
    Rectangle myRectangle;
    myRectangle.setLength(5.0);             // Set the length to 5.0
    float length = myRectangle.getLength(); // Get the length
    cout << "Length: " << length << endl;   // Should print "Length: 5"

    myRectangle.setLength(-2.0); // Try to set a negative length (will print an error message)

    return 0;
}
