
#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >>n;
    int count = n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a==1){//1
            count--;
            continue;
        }
        for(int j=2; j<a-1;j++){
            if(a%j ==0){
                count--;
                break;
            }
        }
    }
    cout << count;

}
