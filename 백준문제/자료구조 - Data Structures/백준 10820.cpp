/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    for(int i=0; i<100;i++){
        string str;
        getline(cin, str);

        if(str.length() == 0)
            break;

        int upper=0,lower=0,num=0,space=0;

        for(int j=0; j<str.length(); j++){
            if(str[j] >= 'A' && str[j] <= 'Z')
                upper++;

            else if(str[j] >='a' && str[j] <='z')
                lower++;

            else if(str[j] >='0' && str[j] <='9')
                num++;

            else if(str[j] == ' ')
                space++;
        }
            cout << lower<< " "<<upper << " " << num << " "<< space << endl;


    }


    return 0;
}
