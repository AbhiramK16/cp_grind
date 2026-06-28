//Uses priority queues
//Problem 2181B: Battle of Arrays Rated 1400

#include <vector>
#include <iostream>
#include <functional> 
#include <queue>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m; 

        priority_queue <int> a;
        priority_queue<int> b;
        while (n--){
            int a1; cin >> a1;
            a.push(a1);
        }
        while (m--){
            int b1; cin >> b1;
            b.push(b1);
        }

  
        while (b.size() > 0 and a.size() > 0){
            if (b.top() > a.top()){
                int val = b.top() - a.top();
                b.pop();
                b.push(val);
            } else {
                b.pop();
            }
                if (b.size() <= 0) {
                    cout << "Alice" << endl;
                    break;
                }
            if (a.top() > b.top()){
                int val = a.top() - b.top();
                a.pop();
                a.push(val);
            } else {
                a.pop();
            }
                if (a.size() <= 0){
                    cout << "Bob" << endl;
                    break;
                }
        }
    }
}
