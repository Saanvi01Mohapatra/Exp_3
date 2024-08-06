//Saanvi Mohapatra
//23070123110
//EnTC B2
//Exp-2 operators
#include <iostream>
using namespace std;
int main()
{
    //arithmetic operators:
    int x,y,sum,sub,mult,divs,mod,inc,dcr;
    cout<<"enter the first number:";
    cin>>x;
    cout<<"enter the number:";
    cin>>y;
    sum=x+y;
    cout<<"x+y="<<sum;
    sub=x-y;
    cout<<"\nx-y="<<sub;
    mult=x*y;
    cout<<"\nx*y="<<mult;
    divs=x/y;
    cout<<"\nx/y="<<divs;
    mod=x%y;
    cout<<"\nx%y="<<mod;
    cout<<"\nx++="<<++x;
    cout<<"\nx--="<<--x;

    //comparision operators:
    int w,z,eq,neq,geq,leq,g,l;
    cout<<"\nenter the first number:";
    cin>>w;
    cout<<"enter the second number:";
    cin>>z;
    eq=(w==z);
    cout<<"\n"<<eq;
   
    leq=(w<=z);
    cout<<"\n"<<leq;
   
    geq=(w>=z);
    cout<<"\n"<<geq;
   
    g=(w>z);
    cout<<"\n"<<g;
   
    l=(w<z);
    cout<<"\n"<<l;
   
    neq=(w!=z);
    cout<<"\n"<<neq;
   
    //logical operators:
    int j,k,a,o,n;
    cout<<"\nenter the first number:";
    cin>>j;
    cout<<"enter the second number:";
    cin>>k;
    cout<<"\n" << (x > 1 && x < 10);
    cout<<"\n" << (x > 1 || x < 10);
    cout <<"\n"<< (!(x > 1 && x < 10));
   
    //assignment operators:
        int s;
        cout<<"\nenter the first number:";
        cin>>s;
        cout<<"\n" <<s;
        s += 3;
        cout<<"\n"<< s;
        s -= 3;
        cout<<"\n"<<s;
        s *= 3;
        cout<<"\n"<<s;
        s /= 3;
        cout<<"\n"<<s;
        s %= 3;
        cout<<"\n"<<s;
        s &= 3;
        cout<<"\n"<<s;
        s |= 3;
        cout<<"\n"<<s;
        s ^= 3;
        cout<<"\n"<<s;
        s >>= 3;
        cout<<"\n"<<s;
        s <<= 3;
        cout<<"\n"<<s;

        return 0;
}
