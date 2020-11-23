/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int factorial(int n){ //recursion
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(void)
{
    cin.tie(NULL);
	cout.tie(NULL);
	ios_base :: sync_with_stdio(false);

	int n;
	cin>>n;

    cout << factorial(n)<<"\n";
}
