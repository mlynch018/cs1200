#include <iostream>
using namespace std;

unsigned long long magicStep(unsigned long long & x);

int main()
{
    unsigned long long magicNumber=93571393692802302;

    cout<<"Step Numbers: "<<endl;
    cout<<magicNumber<<", ";

    while (magicNumber!=1)
    {
        magicStep(magicNumber);
        if (magicNumber != 1)
            cout<<magicNumber<<", ";
        else
            cout<<magicNumber<<endl;
    }

    if (magicNumber==1)
    {
        cout<<"Your number was magic!"<<endl;
    }
}

unsigned long long magicStep(unsigned long long & x)
{
    //odd *3 + 1
    if (x%2==1)
    {
        x=(x*3)+1;
    }
    else //even /2
    {
        x/=2;
    }
    return x;
}


