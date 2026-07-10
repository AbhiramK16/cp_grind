//Solved 200B rated 800

#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++){
        double p; cin >> p;
        sum += p/100;
    }
    
    cout << sum/n * 100 << endl;
}
