//Solved 1352C Rated 1200

#include <iostream>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        long long n, k; cin >> n >> k;
        
        if ((k % (n-1)) != 0 ){
            cout << (k/(n-1))*(n-1) + (k/(n-1) - 1) + k % (n-1) + 1 << endl;
        } else {
            cout << (k/(n-1))*(n-1) + (k/(n-1) - 1) + k % (n-1)<< endl;

        }
    }
}
