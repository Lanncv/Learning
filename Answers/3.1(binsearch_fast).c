int binsearch(int x,int v[],int n){
    int low, high, mid ;

    low=0;
    high=n-1;
    while(low<high){
        mid=(high+low)/2;
        if(x<v[mid])
            high=mid-1;
        else mid=low;
    }
    if(x==v[low])
        return mid;
    else 
        return -1;
}