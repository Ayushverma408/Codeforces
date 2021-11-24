//not working retry needed;
#include<iostream>
using namespace std;
int main()
{
    string inp1;
    string inp2;
    cin >> inp1;
    cin >> inp2;
    for(int i=0; i<=inp1.length();i++)
    { 
        if(inp2[i] == inp1[inp1.length() - i])
        {cout << "YES";
        else{cout << "NO";}
    }
}