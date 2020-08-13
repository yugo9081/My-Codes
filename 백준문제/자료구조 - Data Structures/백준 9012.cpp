
#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    stack<char> vps;
    cin >> t;


    for(int i=0;i<t;i++){
        string str;
        cin >> str;
        for(int j=0; j<str.length();j++){
            if(str[j] == '(' || vps.empty()){
                vps.push(str[j]);
            }
            else if(vps.top() == '('){
                vps.pop();
            }

        }
        if(vps.empty()){
            cout <<"YES" <<endl;

        }
        else {
            cout <<"NO" <<endl;
        }
        while(!vps.empty()){
            vps.pop();
        }

    }
}
