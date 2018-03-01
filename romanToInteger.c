int romanToInt(char* s) {
    char list[]={'M','D','C','L','X','V','I'};
    int value[]={1000,500,100,50,10,5,1};
    
    int i,sum=0,lastval=0;
    int sump=0;
    char* p;
    
    p=s;
    
    while(*p!='\0')
    {
        i=0;
        sump=0;
        while(*p!=list[i])
        {
            i++;
        }
        sump=value[i];
        if(sump==0)
        {
            return -1;
        }
        
        sum=sum+sump;
        
        
        if(lastval != 0)
        {
            if(sump>lastval)
            {
                sum=sum-lastval*2;
            }
        }
        
        lastval=sump;
        p++;
    }
    
    
    return sum;
    
}
