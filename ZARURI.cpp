 #include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void main()   
{int i,x,sw,a,p,total,nrt;
srand((unsigned)time(0));
 p=0;  nrt=0; total=0;
 while (p==0)
{cout<<endl<<endl<<endl;
sw=0;
for(i=1;i<=2;i++)
{x=(rand()%6)+1;
if(sw==0)  
 {cout<<"                  _____"<<endl;
if(x==1)
 {cout<<"                 |     |"<<endl;
  cout<<"                 |  *  |"<<endl;
  cout<<"                 |_____|";
  }
if(x==2)
 {
  cout<<"                 |*    |"<<endl;
  cout<<"                 |     |"<<endl;
  cout<<"                 |____*|";
  }
if(x==3)
 {cout<<"                 |*    |"<<endl;
  cout<<"                 |  *  |"<<endl;
  cout<<"                 |____*|";
  }
if(x==4)     
 {cout<<"                 |*   *|"<<endl;
  cout<<"                 |     |"<<endl;
  cout<<"                 |*___*|";
  }        
if(x==5)
 {cout<<"                 |*   *|"<<endl;
  cout<<"                 |  *  |"<<endl;
  cout<<"                 |*___*|";
  }
if(x==6)
 {cout<<"                 |*   *|"<<endl;
  cout<<"                 |*   *|"<<endl;
  cout<<"                 |*___*|";
  }
  a=x;
  cout<<endl<<endl<<endl;
}
 else
 {cout<<"                                    _____"<<endl;
if(x==1)
 {cout<<"                                   |     |"<<endl;
  cout<<"                                   |  *  |"<<endl;
  cout<<"                                   |_____|";
  }
if(x==2)
 {
  cout<<"                                   |*    |"<<endl;
  cout<<"                                   |     |"<<endl;
  cout<<"                                   |____*|";
  }
if(x==3)  
 {cout<<"                                   |*    |"<<endl;
  cout<<"                                   |  *  |"<<endl;
  cout<<"                                   |____*|";
  }
if(x==4)     
 {cout<<"                                   |*   *|"<<endl;
  cout<<"                                   |     |"<<endl;
  cout<<"                                   |*___*|";
  }        
if(x==5)
 {cout<<"                                   |*   *|"<<endl;
  cout<<"                                   |  *  |"<<endl;
  cout<<"                                   |*___*|";
  }
if(x==6)
 {cout<<"                                   |*   *|"<<endl;
  cout<<"                                   |*   *|"<<endl;
  cout<<"                                   |*___*|";
   }
 }
sw=1;
}
cout<<endl<<"Ai "<<x+a<<" puncte.";
cin>>p;
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<endl<<endl<<endl;
total=total+x+a;
nrt++;
}
if(nrt<20)
cout<<"In "<<nrt<<" turi ai dat ";
else
cout<<"In "<<nrt<<" de turi ai dat ";
if(total<20)
cout<<total<<" puncte";
else
cout<<total<<" de puncte";
}


         