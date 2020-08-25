/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int c[26];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    go24
    string str;
    cin >> str;

    for(int i=0; i< str.size(); i++){
        c[str[i] - 'a']++;

    }
    for(int i=0;i< 26;i++){
        cout << c[i] << " ";
    }
}
