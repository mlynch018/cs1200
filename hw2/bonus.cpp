#include <iostream>
using namespace std;

unsigned long long magicStep(unsigned long long & x);

int main()
{
    unsigned long long magicNumber;
    unsigned long long limit;
    bool counter=false;

    cout<<"Enter an upper limit that you want to search for a counter example unitl:"<<endl;
    cin>>limit;

    cout<<"Searching..."<<endl;

    for (unsigned int i=1; i<=limit; i++)
    {
      magicNumber=i;

      while (magicNumber!=1)
      {
        magicStep(magicNumber);
      }

      if (magicNumber==1)
      {
        cout<<i<<" was magic!"<<endl;
      }
      else
      {
        cout<<i<<" HAS BEEN FOUND A COUNTER EXAMPLE!"<<endl;
        counter=true;
      }
    }

    cout<<(counter ? "A counter example has been found." :
        "No counter examples have been found.")<<endl;
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
