#include<iostream>
using namespace std;

int main()
{
float a, b, c;
    cout<<"Enter three values: ";
    cin>>a>>b>>c;
float largest, smallest;

if(a>b)
{
    if(a>c)
    {
        largest = a;
        if(b>c)
        {
            smallest = c;
        }
        else
        {
            smallest = b;
        }
    }
    else
        {
            largest = c;
            smallest = b;
        }
}
else
{
    if(b>c)
    {
        largest = b;
        if(c>a)
        {
            smallest = a;
        }
        else
        {
            smallest = c;
        }
    }
    else
    {
            largest = c;
            smallest = a;
    }
    
}
    cout<<endl<<"Largest: "<<largest;
    cout<<endl<<"Smallest: "<<smallest;
    return 0;
}
