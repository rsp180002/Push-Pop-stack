#include <iostream> 
#include <queue> 
using namespace std; 
  
int main() 
{ 
    int c = 0; 
    // Empty Priority Queue 
    priority_queue<int> pqueue; 
	//push the element
    pqueue.push(5); 
    pqueue.push(13); 
    pqueue.push(0); 
    pqueue.push(9); 
    pqueue.push(4); 
    pqueue.push(4);
    // Priority queue becomes 13, 9, 5, 4, 0 
  
    // count number
    while (!pqueue.empty()) { 
        pqueue.pop(); 
        
        c++; 
       
    } 
     cout << "total number of element deleted " << c; 
}