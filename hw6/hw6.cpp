#include <iostream>
#include <string>
#include <vector>

using namespace std;

void countNums(int &x, int val);

int main()
{
  int sum=0;    
  int product=0;
  vector<int> v;
  int y;
  bool invec;
  for (int a=-5; a<=4; a++)
  {
    for (int b=-5; b<=4; b++)
    {
      for (int c=-5; c<=4; c++)
      {
        for (int d=-5; d<=4; d++)
        {
            product=a*b*c*d;
            
            y=0; 
            invec=false;
            
            if (product>0)
            {
                countNums(y,a);
                countNums(y,b);
                countNums(y,c);
                countNums(y,d);
                
                for (int i=0; i<v.size(); i++)
                {
                    if (v[i]==y)
                    {
                        invec=true;
                        break; 
                    }
                }
                
                if(!invec)
                {
                    sum++;
                    v.push_back(y);
                    cout<<"Option "<<sum<<") "<<a<<"*"<<b<<"*"<<c<<"*"<<d<<" = "<<product<<endl;
                }
            }    
            
            product=0;
        }         
      } 
    } 
  }      
  cout<<"There are "<<sum<<" possibile selections."<<endl;
}

void countNums(int &x, int val)
{
    
    if (val==-5)
    {
        x+=100000000;    
    }
    else if (val==-4)
    {
        x+=10000000;
    }    
    else if (val==-3)
    {
        x+=1000000;   
    }    
    else if (val==-2)
    {
        x+=100000;   
    }    
    else if (val==-1)
    {
        x+=10000;
    }    
    else if (val==1)
    {
        x+=1000;   
    }    
    else if (val==2)
    {
        x+=100;   
    }   
    else if (val==3)
    {
        x+=10;   
    }
    else if (val==4)
    {
        x+=1;   
    }    
    return;    
}

