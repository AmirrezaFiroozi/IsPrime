//    A simple C program which lets you find all prime numbers in a range//
//  Copyright (C) 2017 Amirreza Firoozi

//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

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
