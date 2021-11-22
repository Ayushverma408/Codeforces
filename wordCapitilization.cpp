#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string inp1;

    cin >> inp1;
    inp1[0] = toupper(inp1[0]);
    cout << inp1;
}