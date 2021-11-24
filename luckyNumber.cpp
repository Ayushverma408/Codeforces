//Not working, Retry needed
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n/10>10)
    {
        if(n%10 != 4 || 7)
        {
        cout << "NO";
        break;}
        else{cout << "Yes";}
        n = n/10;
    }
}