class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int i=0,z=count(a,a+n,0),o=count(a,a+n,1),t=count(a,a+n,2);
        while(z--)
        a[i++]=0;
        while(o--)
        a[i++]=1;
        while(t--)
        a[i++]=2;
    }
};
