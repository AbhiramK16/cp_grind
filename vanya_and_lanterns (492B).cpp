// Solved Vanya and Lanterns Rated 1200
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int n;
    double l;
    cin >> n >> l;
    
    vector<double> arr;
    double max_diff = 0;
    for (int i = 0; i < n; i++){
        double a; cin >> a;
        arr.push_back(a);
    }
    
    sort(arr.begin(), arr.end());
    
 
  
    // 0 3 5 7 9 14 15
    for (int i = 0; i < n; i++){
        if (i == 0){
            max_diff = max(max_diff, (arr[i] - 0));
        } else {
            max_diff = max(max_diff, (((arr[i] - arr[i-1])/2)));
 
        }  if (i == n-1){
            max_diff = max(max_diff, ((l - arr[i])));
 
        } 
    }
    cout << fixed << setprecision(10) << max_diff << endl;}
