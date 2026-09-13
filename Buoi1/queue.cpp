#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    while(1){
        char x[20];
        cin >> x;
        if(strcmp(x,"#") == 0){
            break;
        }
        else if(strcmp(x, "PUSH") == 0){
            int y;
            cin >> y;
            q.push(y);

        }
        else if(strcmp(x, "POP") == 0){
            if(q.empty()){
                cout << "NULL\n";
            }
            else{
            int k = q.front();
            cout << k << endl;
            q.pop();
            }

        }


    }

}
