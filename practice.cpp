
# include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int GCD(int n1, int n2){
        if(n2==0){
            cout << n1;
            return 0;
        }
 
        while(n2!=0){
            int k=n1%n2;
            n1=n2;
            n2=k;
        }
        cout << n1;
        return 0;
    }
};
 
int main(){
    int a,b;
    cin >> a >> b;
    Solution obj;
    obj.GCD(a,b);
    return 0;
}