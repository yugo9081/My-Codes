#include <iostream>
#include <string>
using namespace std;

int c[26];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    int count;
    cin >> str;

    for(char a='a'; a<= 'z'; a++){
        count = str.find(a);
        cout << count << " ";
    }
    cout <<endl;

}
