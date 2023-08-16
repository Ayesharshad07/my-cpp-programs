#include<iostream>
using namespace std;
int main( )
{ 
int a;
int l;
cout<<"enter a number:";
cin>>a;
cout<<" enter the limit";
cin>>l;
for ( int i=1;i<=l;i++)
{ 
cout<<a<<"x"<<i<<"="<<a*i<<endl;
}
}
