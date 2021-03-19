#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
setlocale(LC_ALL,"RUS");
int k,v,v1,v2;
cout<<"Penalty time of teams (in minutes)'"<<endl;
v1=0;
v2=0;
cout<<"Team 1 or team 2, 0-exit"<<endl;
cin>>k;
switch(k)
{
case 1:
{
    cout<<"Penalty=";
    cin>>v;
     //inc(v1,v);
   v1+=v;
   cout<<"Team 1="<<v1<<"Team 2 (minutes) ="<<v2<<"minutes"<<endl;
}
case 2:
{
    cout<<"Penalty= ";
    cin>>v;
    v2+=v;
  cout<<"Team="<<v1<<"Team 2 (minutes) ="<<v2<<"minutes"<<endl;
}
}
  
   cout<<"Game over"<<endl;
system("pause");
return 0;
}

