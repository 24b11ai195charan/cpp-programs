#include <iostream> 
using namespace std; 
int main() { 
    int a, b; 
    cout << "Enter two numbers: "; 
    cin >> a >> b; 
    try { 
        if (b == 0) 
            throw "Division by Zero Error!"; 
        cout << "Result: " << (a / b) << endl; 
    } 
    catch (const char* msg) { 
        cout << "Exception Caught: " << msg << endl; 
    } 
    return 0; 
} 
 
 

 
Input: 
Enter two numbers: 10 0 
Output: 
Exception Caught: Division by Zero Error!
