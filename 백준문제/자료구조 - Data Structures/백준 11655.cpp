
#include <iostream>
#include <string>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;

    while(getline(cin,str)){
        for(int i=0; i<str.size(); i++){

            if(str[i] >= 'A' && str[i] <= 'M'){

                str[i] = str[i]+13;

            }else if(str[i] >='N' && str[i] <='Z'){

                str[i] = str[i]-13;

            }else if(str[i] >='a' && str[i] <='m'){

                str[i] = str[i]+13;

            }else if(str[i] >= 'n' && str[i] <= 'z'){

                str[i] = str[i]-13;

            }

        }



        cout << str << endl;

    }
}
