#include <iostream> 
using namespace std; 
class Shape { 
public: 
    void display() { 
        cout << "This is a shape" << endl; 
    } 
}; 
class Circle : public Shape { 
public: 
    void area() { 
        cout << "Area of circle = πr²" << endl; 
    } 
}; 
class Rectangle : public Shape { 
public: 
    void area() { 
        cout << "Area of rectangle = l × b" << endl; 
    } 
}; 
int main() { 
                                                                                                                  

 
    Circle c; 
    Rectangle r; 
    c.display(); 
    c.area(); 
    r.display(); 
    r.area(); 
    return 0; 
} 
 
 
Output: 
This is a shape 
Area of circle = πr² 
This is a shape 
Area of rectangle = l × b
