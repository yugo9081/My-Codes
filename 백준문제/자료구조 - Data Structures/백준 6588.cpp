
#include <iostream>

using namespace std;

const int MAX = 1000000;
bool primes[MAX+1]; //+1 than the max size


void eratosthenes(int n){
    for(int i=2; i*i<=MAX; i++){
        if(primes[i]==false){//if its false
            for(int j=i*i; j<=MAX; j+=i){
                primes[j] = true;
            }
        }
    }
}
int main()
{
    cin.tie(NULL);
	cout.tie(NULL);
	ios_base :: sync_with_stdio(false);

	eratosthenes(MAX);
	int n=1;
	while(n){ //if n is true
	    cin >> n;
	    if(n == 0){
	        return 0;
	    }
	    for(int i=2; i<=MAX; i++){
	        if(!primes[i]){
	            int temp = n-i;
	            if(primes[temp] == false){
	                cout << n << " = " << i << " + " << temp << '\n';
	                break;
	            }
	        }
	    }
	}
	return 0;
}
