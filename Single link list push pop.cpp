#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* top = NULL; 
void push(int val) { // Insert element in link list node
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data = val; 
   newnode->next = top; 
   top = newnode; 
}
void pop() { //delete data from node
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() { // Display current data
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack is empty";
   else {   
      ptr = top; 
      cout<<"Stack elements are: ";
      while (ptr != NULL) { 
         cout<< ptr->data <<" "; 
         ptr = ptr->next; 
      } 
   }
   cout<<endl;
}
int main() {
   int ch, val; 
   cout<<"1) Push in link list"<<endl;
   cout<<"2) Pop from link list"<<endl;
   cout<<"3) Display link list"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}