#include <iostream> 
using namespace std; 
class Student { 
private: 
    int rollNo; 
    string name; 
public: 
    Student() { // Default constructor 
        rollNo = 0; 
        name = "Unknown"; 
    } 
        Student(int r) { // Constructor with one argument 
        rollNo = r; 
        name = "Not Provided"; 
    } 
    Student(int r, string n) { // Constructor with two arguments 
        rollNo = r; 
        name = n; 
    } 
                                                                                                                           
 
 
    void display() { 
        cout << "Roll No: " << rollNo << ", Name: " << name << endl; 
    } 
}; 
int main() { 
    Student s1;              // Calls default constructor 
    Student s2(10);          // Calls constructor with one argument 
    Student s3(20, "Alice"); // Calls constructor with two arguments 
    s1.display(); 
    s2.display(); 
    s3.display(); 
    return 0; 
} 
 
Output: 
Roll No: 0, Name: Unknown 
Roll No: 10, Name: Not Provided 
Roll No: 20, Name: Alice
