#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    cin >> a ;
    cin >> b;
    bool done = false;
    int length = min(a.size(),b.size());
    if (a == b){
        cout << "Equal";
    }
    else{
        for(int i =0; i< length;i++){
            if(a[i]<b[i]){
                cout << "A";
                done = true;
                break;
            }
            else if (a[i]>b[i]){
                cout << "B";
                done =true;
                break;
            }
        }
        if(!done){
            if(a.size()<b.size()) cout << "A";
            else cout << "B";
        }
    }
    return 0;
}