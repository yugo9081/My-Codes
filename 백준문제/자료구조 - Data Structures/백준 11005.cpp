
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, b;
    cin >> n >>b;

    string s;

    while(n !=0){
        int r=n%b;
        if(r<10){
            s+=(char)(r+'0');
        }
        else{
            s+=(char)(r-10+'A');
        }
        n=n/b;
    }
    reverse(s.begin(),s.end());
    cout <<s;
}
