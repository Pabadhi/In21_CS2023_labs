#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
 
    int tmp = *a;
 
    *a = *b;
 
    *b = tmp;
}
void displayArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
   cout << arr[i] << " ";
   cout << "\n";
}
  
// function to heapify the tree
void heapify(int arr[], int n, int root)
{   int largest = root; 
    int left = 2 * root + 1; 
    int right = 2 * root + 2; 
 
    
    if (left < n && arr[left] > arr[largest])
        largest = left;
 
    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;
 
    // If largest is not root
    if (largest != root) {
        swap(&arr[root], &arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
   // build heapify
  
   
}
 void buildHeap(int arr[], int n)
{
   
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

  
// implementing heap sort
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
 
        heapify(arr, n, i);
    // Heap sort
    
    for (int i = n - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
   
}
  
/* print contents of array */

  
// main program
int main()
{   int val;
cout<<"no of elements in your array"<<endl;
cin>>val;
int heap_arr[val] ;
for(int i=0;i<val;i++){
    cout<<"enter no"<<endl;
    cin>>heap_arr[i];
}
   
   int n = sizeof(heap_arr)/sizeof(heap_arr[0]);
   cout<<"Input array"<<endl;
   displayArray(heap_arr,n);
   buildHeap(heap_arr,  n);
  displayArray(heap_arr, n);
   heapSort(heap_arr, n);
  
   cout << "Sorted array"<<endl;
   displayArray(heap_arr, n);
}