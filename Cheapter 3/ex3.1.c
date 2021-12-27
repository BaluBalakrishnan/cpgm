//Ex.no.3.1:Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside.) Write a version with only one test inside the loop and measure the difference in runtime.
#include<stdio.h>
int binsearch(int x,int v[] , int n);
int main()
{
int balance[] = {2,3,6,80,72,56,7,8,9,10},result;
result = binsearch(72,balance,10);
printf("result=%d",result);
}


int binsearch(int x,int v[] , int n)
{
int low,high,mid;
low=0;
high = n-1;

mid=(low+high)/2;

while(low < high && x!=v[mid])
{
    if(x > v[mid])
    low = mid+1;
	
    else
	  high = mid-1;
    mid=(low+high)/2;
}
    if(x==v[mid])
	return mid;
    else
        return -1;
   
}


