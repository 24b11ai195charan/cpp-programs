#include <iostream> 
#include <deque> 
using namespace std; 
int main() { 
    deque<int> dq; 
    dq.push_back(10); 
    dq.push_front(5); 
    dq.push_back(15); 
    dq.pop_front(); // removes first element 
    cout << "Deque Elements: "; 
    for (int x : dq) cout << x << " "; 
    cout << endl; 
    return 0; 
} 
 
Output: 
Deque Elements: 10 15
