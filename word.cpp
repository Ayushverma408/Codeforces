#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string inp;
    int i;
    int lower = 0;
    int upper = 0;

    cin >> inp;

    for(i=0; i<inp.length(); i++)
    {
        if (islower(inp[i])){lower++;}
        else{upper++;}
    }
    if(lower>=upper)
    {
        char ch;
        for(i=0; i<inp.length(); i++)
        {ch = tolower(inp[i]);
        cout <<ch;}
    }
    else{
        char ch;
        for(i=0; i<inp.length(); i++)
        {    ch =toupper(inp[i]);
        cout << ch;}}
}