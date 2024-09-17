// very simple task
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >>  n;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int k = min(a, b);
        int k2 = max(a, b);
        int g = 0;
        while (k % 10 != c){
            k += 1;
            g += 1;
        }
        if ((k2 - g) % 10 == c){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
