#include<iostream>
using namespace std;
int main()
{
    int n;
    string inp1;
    int a=0,d=0;

    cin >> n;
    cin >> inp1;

    for(int i=0;i<n;i++)
    {
        if(inp1[i] == 'A'){a++;}
        else {d++;}
    }

    if(a>d){cout << "Anton";}
    else if(a < d){cout << "Danik";}
    else{cout << "Friendship";}
}