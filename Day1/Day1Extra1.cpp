pair<long long, long long> getMinMax(long long a[], int n) {
    long long int mini=a[0],maxi=a[0];
    for(long long int i=0;i<n;i++)
    {
        if(a[i]<mini)
        mini=a[i];
        if(a[i]>maxi)
        maxi=a[i];
    }
    pair<long long int,long long int> p = make_pair(mini,maxi);
    return p;
}
