
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;


    for(int k=0; k<tc; k++){
        int tc2;
        cin >>tc2;

        //크기가 n인 tc2인 벡터 생성 및 숫자들 입력받기
        vector<int> v(tc2);
        for(int j=0; j<v.size(); j++){
            cin >> v[j];
        }
        long long sum =0; //Use longlong since int and unsigned int are overdata
        for(int i=0; i<v.size()-1;i++)
            for(int j=i+1;j<v.size();j++)
                sum += gcd(v[i], v[j]); //Euclid

        cout << sum <<"\n";

    }
}
