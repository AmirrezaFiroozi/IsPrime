//This program is written by: Amirreza Firoozi Available under GPLv3+
//It`s free as in both free speech and free sandwiches 
// You may use it for any purpos but with no warranty  
// for more information refer to GPL3 documents ( There`s one included in the directory of this program)
//
#include <stdio.h>
#include <math.h>

int main()
{
 int IsPrime,input,i,root,n,r;
IsPrime=1;
printf(" Please Enter a number to find out whether its prime or not : ");
scanf("%d",&input);
if(input==1)
    printf(" The number 1 is not a prime number\n");
else
{
 root=(int) sqrt(input);
for(i=2;i<=root;i++)
{
    n=input%i;
if(n==0)
{
r=i;
IsPrime=0;
}
 
}
if (IsPrime==1)
{
printf(" %d is prime\n", input);
}
else
printf(" %d is not prime It can be devided by %d \n", input,r);
}
return 0;
}
