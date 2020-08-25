
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;



int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> v;
    string str;
    getline(cin, str);

    for(int i=0;i<str.length();i++){
        v.push_back(str.substr(i,str.length()));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<endl;
    }
}
