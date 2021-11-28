/*
Run build-max-heap(A) on the following
array:
A= 4,1,4,2,16,9,10,14,8,7
*/
#include <iostream>
using namespace std;
void heapify(int A[], int n, int i ){
    // this is the helper function that normally
    // checks if the parent node is big or smaller 
    // than the child node
    int max = i;
    // initialize max(the local root) as the bottom of the 
    // the right most node that is not a leaf
    int left= 2*i+1;
    // these are the chold of the k-th node if there are no 
    // children nodes, algorithm moves to the next
    // local root node
    int right=2*i +2;

    if ((left< n) and (A[left]> A[max]))
    //checking if the left child Node is larger than the root
        max= left;
    
    if ((right<n) and (A[right]> A[max]))
    // checking if the right child node is larger than root
    // (the k-th node)

    if (max != i){
        //if the maximum is not the local root, make it so
        swap(A[i], A[max]);
        // Repeat this whole process recursively by 
        // calling heapify function
        heapify(A, n, max);
    
    }
}

void buildMaxHeap(int A[], int n){
    // this is to find the positions where 
    // we are going to check if the child node is
    // either bigger or smaller than the parent Node
    int k = (n/2)-1;

    for (int i= k; i>= 0; i--){
        // thing of heapify as the helper 
        // function that checks if the
        // the child Node is bigger or smaller than
        // the parent node
        heapify(A, n, i);
    }
}
int main(){
    int A[]= {16,14,10,8,7,9,3,2,4,1};
    // these are two necessary functions needed
    int n = sizeof(A)/ sizeof(A[0]);
    buildMaxHeap(A, n);
}
