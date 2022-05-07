#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;
void main()   
{int i,n,a1,a2,a3,a4,a5,ct,p;
cout<<endl<<endl<<endl;
srand((unsigned)time(0));
cin>>p;
//2020 comment apasa 0 si enter pentru a da la pacane. alt numar pentru a iesi
while(p==0)
{ct=0;
cout<<endl<<endl<<endl;
for(n=1;n<=3;n++)                                                                                    
{for(i=1;i<=5;i++)                                       //  ______       _      _____                 
 {if(ct==0)                                              // |____  |     / |    (  _  )  ********    *   *       *   
   a1=(rand()%8)+1;                                      //     / /     /_ |    |_|/ /   *      *     * *     *******
  if(ct==1)                                              //    / /       | |      / /    *      *      *       *****
   a2=(rand()%8)+1;                                      //   / /        | |     / /___  *      *     * *     *** ***
  if(ct==2)                                              //  /_/         |_|    (______) ********    *   *   **     **
   a3=(rand()%8)+1;                                                    
  if(ct==3)                                              
    a4=(rand()%8)+1;
  if(ct==4)
   a5=(rand()%8)+1;
  ct++;
  }
ct=0;
if(a1==1)
   cout<<"    _   ";
if(a1==2)
   cout<<" _____  ";
if(a1==3)
   cout<<"        ";
if(a1==4)
   cout<<"   4    ";
if(a1==5)
   cout<<"   5    ";
if(a1==6)
   cout<<"   6    ";
if(a1==7)
   cout<<" ______ ";
if(a1==8)
   cout<<"        ";

if(a2==1)
   cout<<"    _   ";
if(a2==2)
   cout<<" _____  ";
if(a2==3)
   cout<<"        ";
if(a2==4)
   cout<<"   4    ";
if(a2==5)
   cout<<"   5    ";
if(a2==6)
   cout<<"   6    ";
if(a2==7)
   cout<<" ______ ";
if(a2==8)
   cout<<"        ";

if(a3==1)
   cout<<"    _   ";
if(a3==2)
   cout<<" _____  ";
if(a3==3)
   cout<<"        ";
if(a3==4)
   cout<<"   4    ";
if(a3==5)
   cout<<"   5    ";
if(a3==6)
   cout<<"   6    ";
if(a3==7)
   cout<<" ______ ";
if(a3==8)
   cout<<"        ";

if(a4==1)
   cout<<"    _   ";
if(a4==2)
   cout<<" _____  ";
if(a4==3)
   cout<<"        ";
if(a4==4)
   cout<<"   4    ";
if(a4==5)
   cout<<"   5    ";
if(a4==6)
   cout<<"   6    ";
if(a4==7)
   cout<<" ______ ";
if(a4==8)
   cout<<"        ";

if(a5==1)
   cout<<"    _   ";
if(a5==2)
   cout<<" _____  ";
if(a5==3)
   cout<<"        ";
if(a5==4)
   cout<<"   4    ";
if(a5==5)
   cout<<"   5    ";
if(a5==6)
   cout<<"   6    ";
if(a5==7)
   cout<<" ______ ";
if(a5==8)
   cout<<"        ";
cout<<endl;

if(a1==1)
   cout<<"   / |  ";
if(a1==2)
   cout<<"(  _  ) ";
if(a1==3)
   cout<<"********";
if(a1==4)
   cout<<"   4    ";
if(a1==5)
   cout<<"   5    ";
if(a1==6)
   cout<<"   6    ";
if(a1==7)
   cout<<"|____  |";
if(a1==8)
   cout<<" *   *  ";

if(a2==1)
   cout<<"   / |  ";
if(a2==2)
   cout<<"(  _  ) ";
if(a2==3)
   cout<<"********";
if(a2==4)
   cout<<"   4    ";
if(a2==5)
   cout<<"   5    ";
if(a2==6)
   cout<<"   6    ";
if(a2==7)
   cout<<"|____  |";
if(a2==8)
   cout<<" *   *  ";

if(a3==1)
   cout<<"   / |  ";
if(a3==2)
   cout<<"(  _  ) ";
if(a3==3)
   cout<<"********";
if(a3==4)
   cout<<"   4    ";
if(a3==5)
   cout<<"   5    ";
if(a3==6)
   cout<<"   6    ";
if(a3==7)
   cout<<"|____  |";
if(a3==8)
   cout<<" *   *  ";

if(a4==1)
   cout<<"   / |  ";
if(a4==2)
   cout<<"(  _  ) ";
if(a4==3)
   cout<<"********";
if(a4==4)
   cout<<"   4    ";
if(a4==5)
   cout<<"   5    ";
if(a4==6)
   cout<<"   6    ";
if(a4==7)
   cout<<"|____  |";
if(a4==8)
   cout<<" *   *  ";

if(a5==1)
   cout<<"   / |  ";
if(a5==2)
   cout<<"(  _  ) ";
if(a5==3)
   cout<<"********";
if(a5==4)
   cout<<"   4    ";
if(a5==5)
   cout<<"   5    ";
if(a5==6)
   cout<<"   6    ";
if(a5==7)
   cout<<"|____  |";
if(a5==8)
   cout<<" *   *  ";
cout<<endl;

if(a1==1)
   cout<<"  /_ |  ";
if(a1==2)
   cout<<"|_|/ /  ";
if(a1==3)
   cout<<"*      *";
if(a1==4)
   cout<<"   4    ";
if(a1==5)
   cout<<"   5    ";
if(a1==6)
   cout<<"   6    ";
if(a1==7)
   cout<<"    / / ";
if(a1==8)
   cout<<"  * *   ";

if(a2==1)
   cout<<"  /_ |  ";
if(a2==2)
   cout<<"|_|/ /  ";
if(a2==3)
   cout<<"*      *";
if(a2==4)
   cout<<"   4    ";
if(a2==5)
   cout<<"   5    ";
if(a2==6)
   cout<<"   6    ";
if(a2==7)
   cout<<"    / / ";
if(a2==8)
   cout<<"  * *   ";

if(a3==1)
   cout<<"  /_ |  ";
if(a3==2)
   cout<<"|_|/ /  ";
if(a3==3)
   cout<<"*      *";
if(a3==4)
   cout<<"   4    ";
if(a3==5)
   cout<<"   5    ";
if(a3==6)
   cout<<"   6    ";
if(a3==7)
   cout<<"    / / ";
if(a3==8)
   cout<<"  * *   ";

if(a4==1)
   cout<<"  /_ |  ";
if(a4==2)
   cout<<"|_|/ /  ";
if(a4==3)
   cout<<"*      *";
if(a4==4)
   cout<<"   4    ";
if(a4==5)
   cout<<"   5    ";
if(a4==6)
   cout<<"   6    ";
if(a4==7)
   cout<<"    / / ";
if(a4==8)
   cout<<"  * *   ";

if(a5==1)
   cout<<"  /_ |  ";
if(a5==2)
   cout<<"|_|/ /  ";
if(a5==3)
   cout<<"*      *";
if(a5==4)
   cout<<"   4    ";
if(a5==5)
   cout<<"   5    ";
if(a5==6)
   cout<<"   6    ";
if(a5==7)
   cout<<"    / / ";
if(a5==8)
   cout<<"  * *   ";
cout<<endl;

if(a1==1)
   cout<<"   | |  ";
if(a1==2)
   cout<<"  / /   ";
if(a1==3)
   cout<<"*      *";
if(a1==4)
   cout<<"   4    ";
if(a1==5)
   cout<<"   5    ";
if(a1==6)
   cout<<"   6    ";
if(a1==7)
   cout<<"   / /  ";
if(a1==8)
   cout<<"   *    ";

if(a2==1)
   cout<<"   | |  ";
if(a2==2)
   cout<<"  / /   ";
if(a2==3)
   cout<<"*      *";
if(a2==4)
   cout<<"   4    ";
if(a2==5)
   cout<<"   5    ";
if(a2==6)
   cout<<"   6    ";
if(a2==7)
   cout<<"   / /  ";
if(a2==8)
   cout<<"   *    ";

if(a3==1)
   cout<<"   | |  ";
if(a3==2)
   cout<<"  / /   ";
if(a3==3)
   cout<<"*      *";
if(a3==4)
   cout<<"   4    ";
if(a3==5)
   cout<<"   5    ";
if(a3==6)
   cout<<"   6    ";
if(a3==7)
   cout<<"   / /  ";
if(a3==8)
   cout<<"   *    ";

if(a4==1)
   cout<<"   | |  ";
if(a4==2)
   cout<<"  / /   ";
if(a4==3)
   cout<<"*      *";
if(a4==4)
   cout<<"   4    ";
if(a4==5)
   cout<<"   5    ";
if(a4==6)
   cout<<"   6    ";
if(a4==7)
   cout<<"   / /  ";
if(a4==8)
   cout<<"   *    ";

if(a5==1)
   cout<<"   | |  ";
if(a5==2)
   cout<<"  / /   ";
if(a5==3)
   cout<<"*      *";
if(a5==4)
   cout<<"   4    ";
if(a5==5)
   cout<<"   5    ";
if(a5==6)
   cout<<"   6    ";
if(a5==7)
   cout<<"   / /  ";
if(a5==8)
   cout<<"   *    ";
cout<<endl;

if(a1==1)
   cout<<"   | |  ";
if(a1==2)
   cout<<" / /___ ";
if(a1==3)
   cout<<"*      *";
if(a1==4)
   cout<<"   4    ";
if(a1==5)
   cout<<"   5    ";
if(a1==6)
   cout<<"   6    ";
if(a1==7)
   cout<<"  / /   ";
if(a1==8)
   cout<<"  * *   ";

if(a2==1)
   cout<<"   | |  ";
if(a2==2)
   cout<<" / /___ ";
if(a2==3)
   cout<<"*      *";
if(a2==4)
   cout<<"   4    ";
if(a2==5)
   cout<<"   5    ";
if(a2==6)
   cout<<"   6    ";
if(a2==7)
   cout<<"  / /   ";
if(a2==8)
   cout<<"  * *   ";

if(a3==1)
   cout<<"   | |  ";
if(a3==2)
   cout<<" / /___ ";
if(a3==3)
   cout<<"*      *";
if(a3==4)
   cout<<"   4    ";
if(a3==5)
   cout<<"   5    ";
if(a3==6)
   cout<<"   6    ";
if(a3==7)
   cout<<"  / /   ";
if(a3==8)
   cout<<"  * *   ";

if(a4==1)
   cout<<"   | |  ";
if(a4==2)
   cout<<" / /___ ";
if(a4==3)
   cout<<"*      *";
if(a4==4)
   cout<<"   4    ";
if(a4==5)
   cout<<"   5    ";
if(a4==6)
   cout<<"   6    ";
if(a4==7)
   cout<<"  / /   ";
if(a4==8)
   cout<<"  * *   ";

if(a5==1)
   cout<<"   | |  ";
if(a5==2)
   cout<<" / /___ ";
if(a5==3)
   cout<<"*      *";
if(a5==4)
   cout<<"   4    ";
if(a5==5)
   cout<<"   5    ";
if(a5==6)
   cout<<"   6    ";
if(a5==7)
   cout<<"  / /   ";
if(a5==8)
   cout<<"  * *   ";
cout<<endl;

if(a1==1)
   cout<<"   |_|  ";
if(a1==2)
   cout<<"(______)";
if(a1==3)
   cout<<"********";
if(a1==4)
   cout<<"   4    ";
if(a1==5)
   cout<<"   5    ";
if(a1==6)
   cout<<"   6    ";
if(a1==7)
   cout<<" /_/    ";
if(a1==8)
   cout<<" *   *  ";

if(a2==1)
   cout<<"   |_|  ";
if(a2==2)
   cout<<"(______)";
if(a2==3)
   cout<<"********";
if(a2==4)
   cout<<"   4    ";
if(a2==5)
   cout<<"   5    ";
if(a2==6)
   cout<<"   6    ";
if(a2==7)
   cout<<" /_/    ";
if(a2==8)
   cout<<" *   *  ";

if(a3==1)
   cout<<"   |_|  ";
if(a3==2)
   cout<<"(______)";
if(a3==3)
   cout<<"********";
if(a3==4)
   cout<<"   4    ";
if(a3==5)
   cout<<"   5    ";
if(a3==6)
   cout<<"   6    ";
if(a3==7)
   cout<<" /_/    ";
if(a3==8)
   cout<<" *   *  ";

if(a4==1)
   cout<<"   |_|  ";
if(a4==2)
   cout<<"(______)";
if(a4==3)
   cout<<"********";
if(a4==4)
   cout<<"   4    ";
if(a4==5)
   cout<<"   5    ";
if(a4==6)
   cout<<"   6    ";
if(a4==7)
   cout<<" /_/    ";
if(a4==8)
   cout<<" *   *  ";

if(a5==1)
   cout<<"   |_|  ";
if(a5==2)
   cout<<"(______)";
if(a5==3)
   cout<<"********";
if(a5==4)
   cout<<"   4    ";
if(a5==5)
   cout<<"   5    ";
if(a5==6)
   cout<<"   6    ";
if(a5==7)
   cout<<" /_/    ";
if(a5==8)
   cout<<" *   *  ";
cout<<endl<<endl<<endl;
}
cin>>p;
}
}