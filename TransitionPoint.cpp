class TransitionPoint {
    int transitionPoint(int arr[], int n) {
        if(arr[n-1]==0)
           return -1;
        else if(arr[0]==1)
           return 0;
        else
        {
           int m,l=0,r=n-1;
           m=l+r/2;
           while(r>l)
           {
               m=(l+r)/2;
               if(arr[m]==0 && arr[m+1]==1)
                  return m+1;
               else if(arr[m]==1&&arr[m-1]==0)
                  return m;
               else if(arr[m]==0)
                  l=m+1;
               else if(arr[m]==1)
                  r=m-1;
           }
           //int k=m+1;
           return m+1;
        }
    }
}
