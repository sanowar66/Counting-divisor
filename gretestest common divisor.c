#include<stdio.h>
int main()
{
    int x,y,gcd,count=1;
    printf("Enter the two integar number = ");
    scanf("%d %d",&x,&y);
    while(count<=x && count<=y)
    {
        if(x % count==0 && y % count ==0){
            gcd=count;
        }
         count++;
    }
   printf("GCD = %d",gcd);
   return 0;
}
