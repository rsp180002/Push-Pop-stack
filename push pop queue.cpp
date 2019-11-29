// queue::push/pop
#include <iostream>                // std::cin, std::cout
#include <queue>                // std::queue


 int
main () 
{
  
std::queue < int >myqueue;
  
int myint;
  
 
std::cout << "Please enter some integers (enter 0 to end):\n";
  
 //while do for the push and pop on queue
  do
    {
      
std::cin >> myint;
//use push for the queue      
myqueue.push (myint);
    
}
  while (myint);
  
 
std::cout << "myqueue contains: ";
  
while (!myqueue.empty ())
    
    {
      




std::cout << " \n Pop is applying on " << myqueue.front ();




//use pop on queue      
myqueue.pop ();
std::cout <<" pop done ";
      


}
  
std::cout << '\n';
  
 
return 0;


}