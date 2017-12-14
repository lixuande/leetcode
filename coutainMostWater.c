int maxArea(int* height, int heightSize) {
    int maxarea=0;
    int i=0,j=0;
    
    j=heightSize-1;
    
    while(i<j)
    {
        int tmp=0;
        if(height[i]==0)
        {
            i++;
        }
        else if(height[j]==0)
        {
            j--;
        }
        else
        {
            if(height[i] > height[j])
            {
                tmp=height[j]*(j-i);
                j--;
            }
            else
            {
                tmp=height[i]*(j-i);
                i++;
            }
        }
            
        if(tmp>maxarea)
        {
            maxarea=tmp;
        }
    
    }
    
    return maxarea;
}
