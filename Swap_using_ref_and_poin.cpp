// Function to swap A and B
// using pointers
void swap(int *P, int *Q){
    
   int temp;
   temp=*P;
   *P=*Q;
   *Q=temp;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    int temp;
    temp=A;
    A=B;
    B=temp;
}
  
