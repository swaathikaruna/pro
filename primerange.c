#include <stdio.h>

int main(void) {
    int r1,i,j,r2,count=0,temp;
    scanf("%d%d",&r1,&r2);
    if(r2<2)
    {
      printf ("there is no prime number");  
    }
    if(r1%2==0)
    {
        r1++;
    }
     printf("The prime numbers are:");
    for(i=r1;i<=r2;i+=2)
    {
        int flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            }
           
            if(flag==0)
            {
                printf("%d\n",i);
                count++;
            }
    }

            printf("the range b/w %d and %d is:%d",r1,r2,count);
    
	
	return 0;
}

