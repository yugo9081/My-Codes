
/*문제
    주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을, 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라. arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다. */
#include <iostream>

using namespace std;

int func2(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j< n; j++){
            if(arr[i]+arr[j] == 100){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n=3;
    int arr[]={1,52,48};
    
    
    return func2(arr, n);
}