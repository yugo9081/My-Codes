
#include <iostream>
#include <string>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d;
    cin >> a>>b>>c>>d;

    string x=to_string(a)+to_string(b);
    string y=to_string(c)+to_string(d);

    long long i = stoll(x);
    long long j = stoll(y);

    cout << i+j<< endl;
}
