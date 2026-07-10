//Solved 266A Rated 800

#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    
    set<char> occur; 
    int total = 0;
    int count = 0;
    for (int i = 0; i < n; i++ ){
        occur.insert(s[i]);
        if (occur.size() == 1){
            count++;
        } else {
           if (count >= 2){
            total += count - 1;
           }
            occur = {};
            occur.insert(s[i]);
            count = 1;

        }
    }
     if (count >= 2){
            total += count - 1;
    }


    cout << total << endl;
}
