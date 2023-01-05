#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    long l;
    char c;
    float f;
    double d;

    cin>>n>>l>>c>>f>>d;
    cout<<n<<"\n"<<l<<"\n"<<c<<"\n"<<fixed<<setprecision(3)<<f<<"\n"<<fixed<<setprecision(9)<<d<<"\n";
    return 0;
}