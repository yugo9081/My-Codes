
#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int lcm(int a, int b){

    return gcd(a,b)*(a/gcd(a,b))*(b/gcd(a,b));
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    cout << gcd(a,b)<<endl;
    cout << lcm(a,b)<<endl;


}
