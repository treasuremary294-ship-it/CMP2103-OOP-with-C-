#include <iostream>
using namespace std;

class Rectangle {
private:
double width;
double length;
public:
Rectangle() : width(0), length(0) {}
Rectangle(double w, double l) : width(w), length(l) {}
void setWidth(double w) { width = w; 
if (w >= 0) width = w;
else cout << "Width cannot be negative.\n";
}
void setLength(double l) { 
    if (l >= 0) length = l;
    else cout << "Length cannot be negative.\n";
}
double getWidth() const { return width; }
double getLength() const { return length; }
double area() const { return width * length; }
double perimeter() const { return 2 * (width + length); }
};
int main() {
    Rectangle r1;
    r1.setWidth(5);
    r1.setLength(10);
cout << "Rectangle 1\n";
cout << "Width: " <<r1.getWidth() << endl;
cout << "Length: " << r1.getLength() << endl;
cout << "Area: " << r1.area() << endl;
cout << "Perimeter: " << r1.perimeter() << endl;

Rectangle r2(3, 4);
cout << "\nRectangle 2\n";
cout << "Width: " << r2.getWidth() << endl;
cout << "Length: " << r2.getLength() << endl;
cout << "Area: " << r2.area() << endl;
cout << "Perimeter: " << r2.perimeter() << endl;

r1.setWidth(-2); 

return 0;
}