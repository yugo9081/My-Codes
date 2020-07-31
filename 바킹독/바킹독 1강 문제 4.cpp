/*
	문제
	N이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수 func4(int N)을 작성하라. N은 10억 이하의 자연수이다. 
	*/

	
#include <iostream>

using namespace std;

int func4(int n){
    if(n%2 == 1){
        return n-1;
    }
    else if(n%2 == 0){
        return n;
    }
}
int main(void)
{
    int n=5;
    cout << func4(n) <<endl;
}
