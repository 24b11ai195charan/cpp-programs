#include <iostream> 
using namespace std; 
int x = 100;  // Global variable 
int main() { 
    int x = 50;   // Local variable 
    cout << "Local variable x = " << x << endl; 
    cout << "Global variable x = " << ::x << endl; // using scope resolution 
    return 0; 
} 
 
Output: 
Local variable x = 50 
Global variable x = 100
