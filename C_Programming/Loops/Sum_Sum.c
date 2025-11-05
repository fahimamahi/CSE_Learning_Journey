#include <stdio.h>

int main() 
{
    int N,i,V,psum=0,nsum=0;
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&V);
        
        if(V>0)
        {
            psum+=V;
        }
        else if(V<0)
        {
            nsum+=V;
        }
        
    }
    
    printf("%d %d",psum,nsum);
  
    return 0;
}
