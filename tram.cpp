#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int i,n;
    int in, out;
    int max1 =0;
    int temp =0;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> out >> in;
        temp = temp + in - out;

        max1 = max(max1, temp);
    }
    cout << max1;
}