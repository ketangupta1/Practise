//User function Template for Java
class RearrangeClassmate 
{ 
    void prank(long[] a, int n)  
    { 
        long[] b=new long[a.length];
        long[] a1=new long[a.length];
        int i;
        
        // for(i=0;i<n;i++)
        // {
        //     a1[i]=a[i];
        // }
        for(i=0;i<n;i++)
        {
            b[i]=a[(int)a[i]];
        }
        for(i=0;i<n;i++)
        {
            a[i]=b[i];
        }
    }
} 
