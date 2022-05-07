#include<iostream>
using namespace std;

void main()
{long int p1,p2,p3,p4,n;
int val,sw;
cin>>n;     sw=0;
p1=n;
p2=n;
p3=n;
p4=n;
while(((p1>0)||(p2>0)||(p3>0)||(p4>0))&&(sw==0))
 {if (p1>0)
    {cout<<"P1: ";
     cin>>val;
     p1=p1+val;
     cout<<"P1 are "<<p1<<endl;
     }
  if(p2>0)
    {cout<<"P2: ";
     cin>>val;
     p2=p2+val;
     cout<<"P2 are "<<p2<<endl;
     }
  if(p3>0)
    {cout<<"P3: ";
     cin>>val;
     p3=p3+val;
     cout<<"P3 are "<<p3<<endl;
     }
  if(p4>0)
    {cout<<"P4: ";
     cin>>val;
     p4=p4+val;
     cout<<"P4 are "<<p4<<endl;
     }
  cout<<endl;
  if((p1<=0)&&(p2<=0)&&(p3<=0))
    {cout<<"P4 a castigat!!";
     sw=1;}
  if((p1<=0)&&(p2<=0)&&(p4<=0))
    {cout<<"P3 a castigat!!";
     sw=1;}
  if((p1<=0)&&(p3<=0)&&(p4<=0))
    {cout<<"P2 a castigat!!";
     sw=1;}
  if((p2<=0)&&(p3<=0)&&(p4<=0))
    {cout<<"P1 a castigat!!";
     sw=1;}
   }
}
