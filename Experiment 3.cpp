/*Q:Write a program to accept N integers from the user and store them in an array. Sort the array in ascending order using Bubble sort. Then accept another number from the user, search whether that number exists in the array using Binary Search.
If it does, display its index and if it doesn’t, then print that the number is not found in the array.
*/
#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,elem,flag=0,temp;
int mid,min_no,max_no;
cout<<"Enter the size of array: ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Array:\n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
cout<<"\nAfter sorting the array: \n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to search: ";
cin>>elem;
min_no=0;
max_no=n-1;
mid=(min_no+max_no)/2;
if(min_no<max_no)
{
    for(i=0;i<n;i++)
    {
        if(a[mid]==elem)
        {
            cout<<"Position of "<<elem<<" is: "<<mid+1;
            flag=1;
            break;
        }
        else if(a[mid]>elem)
        {
            max_no=mid-1;
        }
        else if(a[mid]<elem)
        {
            min_no=mid+1;
        }
        mid=(min_no+max_no)/2;
    }
}
if(flag==0)
    cout<<"Element not found ";
return 0;
}
