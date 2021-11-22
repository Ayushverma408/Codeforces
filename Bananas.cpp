#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    int cost = 0;
    cin >> k >> n >> w;

    while(w > 0)
    {
        cost = w*k + cost;
        w--;
    }
    if(cost - n > 0)
    {
    cout << cost - n;
    }
    else
    {cout << 0;}
}