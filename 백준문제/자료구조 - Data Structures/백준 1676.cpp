/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
	cout.tie(NULL);
	ios_base :: sync_with_stdio(false);

	int n;
	int count;
	cin>>n;

	count = n/5 + n/25 + n/125;
	cout << count << "\n";
}
