Program: 
#include <iostream> 
using namespace std; 
int main() { 
    try { 
        int x; 
        cout << "Enter a number: "; 
        cin >> x; 
        if (x == 0) 
            throw x; 
        else if (x < 0) 
            throw string("Negative Number Exception"); 
        else 
            cout << "You entered: " << x << endl; 
    } 
    catch (int n) { 
        cout << "Exception: Division by Zero not allowed!" << endl; 
    } 
    catch (string &msg) { 
        cout << "Exception: " << msg << endl; 
    } 
    return 0; 
} 

 
 
 
 
Input: 
Enter a number: -5 
Output: 
Exception: Negative Number Exception
