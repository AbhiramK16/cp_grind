//Solved Codeforces 149A Rated 900
#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main(){
    int t; cin >> t;

    vector<int> nums;
    for (int i = 0; i < 12; i++){
        int a; cin >> a;
        nums.push_back(a);
    }
    
    sort(nums.begin(), nums.end());
    int sum = 0;
    int count = 0;
    int changing_t = t;
    while (sum < t){
        count++;
        int index = lower_bound(nums.begin(), nums.end(), changing_t) - nums.begin();

        if (nums.size() == 0){
            cout << -1 << endl;
            return 0;
        }
        if (index == nums.size()){
            changing_t -= nums[nums.size() - 1];
            sum += nums[nums.size() -1];
            nums.erase(nums.end() - 1);
           
        } else {
            sum += nums[index];
            nums.erase(nums.begin() + index);

        }
    }
    cout << count << endl;
  
}
