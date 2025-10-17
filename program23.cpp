#include <iostream> 
using namespace std; 
class Person { 
public: 
    void show() { 
        cout << "I am a Person" << endl; 
    } 
}; 
class Student : virtual public Person { 
public: 
    void showStudent() { 
        cout << "I am a Student" << endl; 
    } 
}; 
class Employee : virtual public Person { 
public: 
    void showEmployee() { 
        cout << "I am an Employee" << endl; 
    } 
                                                                                                                 

 
}; 
 
class WorkingStudent : public Student, public Employee { 
public: 
    void showWorkingStudent() { 
        cout << "I am a Working Student" << endl; 
    } 
}; 
int main() { 
    WorkingStudent ws; 
    ws.show();               // No ambiguity due to virtual inheritance 
    ws.showStudent(); 
    ws.showEmployee(); 
    ws.showWorkingStudent(); 
    return 0; 
} 
 
 
 
 
 
 
 
 
 
 
 
                                                                                                            
Output: 
I am a Person 
I am a Student 
I am an Employee 
I am a Working Student 
 
 
 
 
 
 
