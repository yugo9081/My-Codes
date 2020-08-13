#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
using namespace std;

int main(void)
{
    int n;
    stack<int> get ;
    // scanf("%d", &n);
    cin >> n;
    string action;
    for(int i=0; i<n;i++){


        // scanf("%d", &action);
        cin >>action;
        if(action == "push"){
            int st;
            // scanf("%d", &st);
            cin >> st;
            get.push(st);
        }
        else if(action== "size"){
            cout <<get.size()<<endl;
        }
        else if(action== "empty"){
            if(get.empty()){
                cout << "1" <<endl;
            }
            else{
                cout << "0" <<endl;
            }
        }
        else if(action== "pop"){

            if(!get.empty()){
                // printf("%d\n", -1);
                cout << get.top()<<endl;
                get.pop();
            }
            else{
                cout<< -1<<endl;
            }
        }
        else if(action== "top"){
            if(!get.empty()){
                // printf("%d\n", -1);
                 cout<<get.top()<<endl;
            }
            else{
                cout<< -1<<endl;
            }
        }
    }
    return 0;
}
