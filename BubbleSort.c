#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int ara[4]= {6,2,4,1};
    for(i=0; i<n; i++) //This call Out loop;
    {
        for(j=0; j<n-i-1; j++) //J=n-i-1 because when we are short 1st time then last element are not change Or no compare because it is the largest value
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }

    for(i=0; i<4; i++)
    {
        printf("%d",ara[i]);
    }


    return 0;
}


