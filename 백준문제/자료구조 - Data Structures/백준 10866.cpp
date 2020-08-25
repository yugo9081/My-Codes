/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <deque>
#include <string>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    deque<int> myq;

    for(int i=0; i<n;i++){
       string str;
       cin >> str;
       if(str == "push_back"){
           int action;
           cin >> action;

           myq.push_back(action);
       }
       else if(str == "push_front"){
           int action;
           cin >> action;

           myq.push_front(action);
       }
       else if(str == "front"){
           if(myq.size() == 0){
               cout << -1 <<endl;
           }
           else cout << myq.front()<<endl;
       }
       else if(str == "back"){
           if(myq.size()==0){
               cout << -1 <<endl;
           }
           else cout << myq.back()<<endl;
       }
       else if(str == "size"){
           cout << myq.size()<<endl;
       }
       else if(str == "empty"){
            cout << myq.empty() <<endl;

       }
       else if(str == "pop_back"){
           if(myq.size() == 0){
               cout << -1 <<endl;
           }
           else{
               cout << myq.back()<<endl;
               myq.pop_back();

           }

       }
       else if(str == "pop_front"){
           if(myq.size() == 0){
               cout << -1 <<endl;
           }
           else{
               cout << myq.front()<<endl;
               myq.pop_front();

           }

       }
    }
}
