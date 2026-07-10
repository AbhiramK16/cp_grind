//Solved 1487A Rated 800

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        
        vector<int> values; 
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            values.push_back(a);
        }
        sort(values.begin(), values.end());
        
        int count = 0;
        for (int i = 1; i< n; i++){
            if (values[values.size() - i] > values[0]){
                count++;
            }
        }

        cout << count << endl;   
    }
}
