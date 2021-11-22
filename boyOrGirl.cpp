#include<iostream>
using namespace std;
int main()
{
    string input1;
    int count = 0;

    cin>> input1;
    for(int i=0;i<input1.length();i++)
    {
        for(int j =i+1; j<i; j++)
        {
            if(input1[j] != input1[i])
            {

            }
        }
    }
    
    if (count%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else {cout << "IGNORE HIM!";}
}