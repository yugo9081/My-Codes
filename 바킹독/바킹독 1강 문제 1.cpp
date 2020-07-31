
/*문제
    N 이하의 자연수 중에서 3의 배수이거나 5의배수인 수를 모두 합한 값을 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.*/
    
#include <iostream>

using namespace std;

int func1(int n){
    int sum=0;
    
    for(int i=n; i>=0; i--){
        if(i%5 == 0){
            sum=sum+i;
            
        }
        else if(i%3 == 0){
            sum=sum+i;
        }
        
    }
    return sum;
}
int main()
{
    int n=278812814;
    
    return func1(n);
}

