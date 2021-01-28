#include<iostream>
using namespace std;
int m=10;
int main(){
int m=20;//local to main
{
int k=m;
int m=30;
cout<<"we are in inner block"<<"\n";
cout<<"k"<<k<<"\n";
cout<<"m"<<m<<"\n";
cout<<"::m is"<<::m<<"\n";

}
cout<<"we came outside";
cout<<"m is"<<m;
cout<<"whereas ::mis"<<::m;//scope resolution operator

return 0;
}
