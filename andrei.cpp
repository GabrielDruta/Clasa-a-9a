#include<iostream.h>
#include<conio.h>
int st[101],n,adiac[100][100],sp;
void init()
    { 
    int i;
    for(i=1;i<=n;i++)
           st[i]=0;
	}
int valid(int k)
    {
    int i;
    for(i=1;i<k;i++)
         if(st[k]==st[i])
               return 0;
    if(adiac[st[k-1]][st[k]]==1)
               return 1;
            else
               return 0;
    }
void tipar(int k)
    {
    int i;
	for(i=1;i<=k;i++)
	      cout<<st[i]<<" ";
	cout<<endl;
    }
void bktr(int k)
    {
    int z;
    for(z=1;z<=n;z++)
          {
          st[k]=z;
          if((k==1)&&(z<=n))
           {           bktr(k+1);}
                else
                      if(valid(k)==1)
                            {
                            tipar(k);
                            bktr(k+1);

                            }
          }

    }
void main()
{
    int k=1,q,w;
    cout<<"Introduceti numarul de noduri = ";
    cin>>n;
    cout<<endl<<endl;
    cout<<"Introduceti in campurile urmatoare"<<endl<<"elementele matricii de adiacenta "<<endl<<endl<<endl;
    for(q=1;q<=n;q++)
       for(w=1;w<=n;w++)
           {
           		cout<<"adiac["<<q<<"]["<<w<<"]=";
           		cin>>adiac[q][w];
           }
    clrscr();
    for(q=1;q<=n;q++)
    {   for(w=1;w<=n;w++)
       	cout<<adiac[q][w]<<"  ";
       cout<<endl<<endl;
    }
    cout<<"Acestea sunt toate lanturile elementare din graf "<<endl<<endl;
    init();
    bktr(k);
    getch();
    }