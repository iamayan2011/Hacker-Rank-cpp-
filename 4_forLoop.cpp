#include <iostream>
using namespace std;

void check(int n)
{

    if (n < 10)
    {
        switch (n)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;

        
        }
    }

    else{
        if(n%2==0) cout<<"even";
        else cout<<"odd";
    }
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        check(i);
        cout<<endl;
    }
    return 0;
}