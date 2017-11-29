int reverse(int x) {
    int flag=0;
    int index=0;
    int rev=0;
    int temp=0;
    
    while(x!=0)
    {
        temp=x%10;
        if(abs(rev)>(INT_MAX/10))
        {
            return 0;
        }
        rev=rev*10+temp;
        x=x/10;
    }
    
    
    return rev;
}
