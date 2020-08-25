
#include <iostream>
#include <queue>

using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >>n >>k;

    queue<int> q;
    for(int i=0; i<n; i++){
        q.push(i+1);
    }
    cout <<"<";
    for(int i=0;i<n-1; i++){
        for(int j=0;j<k-1; j++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() <<", ";
        q.pop();

    }
    cout << q.front() << ">" <<endl;

}
