bool isPalindrome(int x) {
    char str[32];
    int index=0;
    int len=0;
    int mid=0;
    
    if(x<0)
    {
        return false;
    }
    memset(str,0,32);
    
    for(index=0;x!=0;index++)
    {
        str[index]=x%10;
        x=x/10;
    }
    
    len=index-1;
    mid=(len+1)/2;
    
    for(index=0;index<mid;index++,len--)
    {
        if(str[index] != str[len])
        {
            return false;
        }
    }
    
    return true;
}
