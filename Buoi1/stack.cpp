#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> s;
    while(1){
        char c[20];
        cin >> c;
         if(strcmp(c, "#") == 0){
            break;
        }
        else if(strcmp(c, "PUSH") == 0){
            int x;
            cin >> x;
            s.push(x);
        }
        else if(strcmp (c, "POP") == 0){
            if(s.empty()){
                cout<< "NULL\n";
            }
            else{
                 int k = s.top();
            cout << k << endl;
            s.pop();
            }

        }


    }
}
