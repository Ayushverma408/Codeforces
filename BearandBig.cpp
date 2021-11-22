#include<iostream>
using namespace std;
int main(){
    int a,b;
    int count = 0;

    cin >> a >>b;

    do
    {
        a *=3;
        b *=2;

        count++;
    } while (a<=b);
    
    cout << count;
    return 0;
}