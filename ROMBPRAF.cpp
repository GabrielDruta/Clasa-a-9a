#include<iostream>
using namespace std;
void main()
{int l,s,s1,n;
cout<<"n=";
cin>>n;
for(l=1;l<=n;l++)
 {for(s=1;s<=n-l;s++)
   cout<<" ";
  cout<<l;
  for(s1=1;s1<=2*l-3;s1++)
   cout<<" ";
  if(l>1)
   cout<<l;
  cout<<endl;
  }
for (l=n-1;l>=1;l--)
 {for(s=1;s<=n-l;s++)
   cout<<" ";
  cout<<l;
  for(s1=1;s1<=2*l-3;s1++)
   cout<<" ";
  if(l>1)
   cout<<l;
  cout<<endl;
  }
}