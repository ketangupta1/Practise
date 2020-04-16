/*Function to count zeros in each column
* N : Number of rows and columns in array
M is the matrix that is globally declared
*/
int columnWithMaxZeros(int N)
{
    int s=INT_MAX,in,ind=-1;
    for(int i=0;i<N;i++)
    {
        int t=0;
        for(int j=0;j<N;j++)
        {
            t+=M[j][i];
        }
        ind++;
        if(t<s)
        {
            s=t;
            in=ind;
        }
    }
    return in;
}
