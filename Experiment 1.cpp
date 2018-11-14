/*Q:Write a menu driven program that implements following operations on a  linear array:
•	Insert a new element at a specified position
•	Delete an element either whose value is given or whose position is given
•	To find the location of a given element
•	To display the elements of the linear array
*/
#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,m,posi,elem,choice_number,flag=0;
cout<<"Enter the size of array: ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nEnter choice:\n1 for insertion\n2 for deletion\n3 for searching\n4 for display\n";
cin>>choice_number;
while(choice_number!=0)
{
    switch(choice_number)
    {
    case 1:
        cout<<"Enter the position and element you want to insert\n";
        cin>>posi>>elem;
        m=n-posi-1;
        for(i=n;i>=m;i--)
        {
            a[i+1]=a[i];
        }
        a[posi]=elem;
        n=n+1;
        break;
    case 2:
        cout<<"Enter the position of element you want to delete\n";
        cin>>posi;
        for(i=posi;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        break;
    case 3:
        flag=0;
        cout<<"\nEnter the element to search: ";
        cin>>elem;
        for(i=0;i<n;i++)
        {
            if(a[i]==elem)
            {
                cout<<"\nPosition is: "<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"\nElement not found";
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"\nEnter choice again: ";
    cin>>choice_number;
}
}

