#include <iostream>
#include<ctime>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
int pop() {
   if(top==NULL){
   cout<<"Stack Underflow"<<endl;
   return -1;}
   else {
      cout<<"The popped element is "<< top->data <<endl;
      int k=top->data;
      top = top->next;
      return k;
   }
}
void display() {
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
   clock_t start,end;
    double time_spent;
     start=clock();
push(8);
push(10);
push(5);
push(11);
push(15);
push(23);
push(6);
push(18);
push(20);
push(17);
display();
pop();
pop();
pop();
pop();
pop();
display();
push(4);
push(30);
push(3);
push(1);
push(14);
push(130);
push(13);
push(11);
display();
end=clock();
    time_spent=(double)(end-start)/(double)CLOCKS_PER_SEC;
    cout<<"time spent is "<<time_spent<<endl;

    return 0;
}