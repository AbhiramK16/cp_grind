//Solved 514B Rated 1400

#include <iostream>
#include <set>
#include <cmath>
using namespace std;


int main(){
    int n, x, y; cin >> n >> x >> y;
    set<double> slopes;
    
    
    for (int i = 0; i < n; i++){
        int x1, y1; cin >> x1 >> y1;
        if (x1 == x){
            slopes.insert(20000);
        } else {
            slopes.insert(double(y-y1)/(x-x1));
        }
    }
    
    cout << slopes.size() << endl;
}
