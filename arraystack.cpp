#include <iostream>
#include<ctime>
using namespace std;
int stack[100];
int n,i,top,x;
void push(int val);
int pop();
void display();
int main()
{ top=-1;
  n=20;
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
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      
      top++;
      stack[top]=val;
      cout<<stack[top]<<endl;
   }
}
int pop() {
   if(top<=-1){
   cout<<"Stack Underflow"<<endl;
   return -1;}
   else {int k=stack[top];
      //cout<<"The popped element is "<< stack[top] <<endl;
      top--;
      return k;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}