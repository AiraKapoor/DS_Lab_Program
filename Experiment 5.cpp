/* Write a menu driven program that implements the following operations on a Stack(either implement as Linear array and as Linked list)
*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 6

int Stack[MAX];
int top = -1;

void push(int x);
void pop();
void display();

int main ()
{
    int choice, val;
    choice = -1;

while(choice !=4)
    {
        cin>> choice;

        switch(choice)
        {
            case 1:// cout<<�push�;
cin>>val;
push(val);
break;
            case 2: // cout<<�pop�;
pop();
break;
            case 3:// cout<<�Display�;
display();
break;
default:
break;
        }
        cout<<"choice please"<<endl;
    }
return 0;
}
void push(int x)
{   if(top==MAX)
    cout<<"overflow "<<endl;
    else
   {
    Stack[top+1]=x;
    top++;
   }
}
void pop()
{ if(top==-1)
cout<<"underflow sir!"<<endl;
else
{cout<<"deleted element is"<<" "<<Stack[top--]<<endl;
}
}
void display()
{for(int i=top;i>-1;i--)
cout<<Stack[i]<<" ";
cout<<endl;
}

