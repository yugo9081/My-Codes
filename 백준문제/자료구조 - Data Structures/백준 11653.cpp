
#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
	cout.tie(NULL);
	ios_base :: sync_with_stdio(false);

	int n;
	cin>>n;

    for(int i=2; n>1; ){
        if(n%i ==0){
            cout << i <<"\n";
            n /=i;
        }
        else
            i++;

    }
}
