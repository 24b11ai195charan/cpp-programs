#include <iostream> 
using namespace std; 
// Function to modify value 
void modify (int  x) { 
    x = x + 5 ;   // change applied to the copy 
} 
int main() { 
    int a = 10;   
    cout << "Value of a before function call: " << a << endl ; 
    modify(a) ;   // Call by Value 
    cout << "Value of a after function call: " << a << endl;   
    return 0; 
} 
Output 
Value of a before function call :10 
Value of a after function call : 10

    Call by Reference: 
#include <iostream> 
using namespace std; 
void swapNumbers(int &a, int &b) { 
    int temp = a; 
    a = b; 
    b = temp; 
    cout << "Inside function (after swap): a = " << a << ", b = " << b << endl; 
} 
 
int main() { 
    int x = 10, y = 20; 
    cout << "Before function call: x = " << x << ", y = " << y << endl; 
    // Call by reference 
    swapNumbers(x, y); 
    cout << "After function call: x = " << x << ", y = " << y << endl; 
    return 0; 
} 
