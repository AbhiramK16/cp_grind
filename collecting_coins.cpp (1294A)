//Solved 1294A Rated 800

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int t; cin >> t; 
    while (t--){
      int a, b, c, n; cin >> a >> b >> c >> n;
      
      
      if ((a+b+c+n) % 3 == 0){
        int mid_value = (a + b + c + n)/3;
          if ((fabs(a- mid_value) + fabs(b-mid_value) + fabs(c-mid_value)) == n){
              cout << "YES" << endl;
          } else {
              cout << "NO" << endl;
          }
      } else {
          cout << "NO" << endl;
      }
    }
}
