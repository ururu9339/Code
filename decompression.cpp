// another task from jetbrains contest 2024 february(construct uni) a task was called decompression but i dont remeber the statement.
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string res = "";
        int q = s.length();
        int sum1 = 0, sum2 = 0;

        for (int j = 0; j < q; j++) {
            if (int('A') <= int(s[j]) && int('Z') >= int(s[j])) {
                sum1 += 1;
                continue;
            }

            stringstream ss;
            int g;
            ss << s[j];
            ss >> g;

            if (sum1 > sum2) {
                if (int('A') <= int(s[j - 1]) && int('Z') >= int(s[j - 1])) {
                    for (int i = 0; i < g; i++) {
                        res += s[j - 1];
                    }
                }
            } else if (sum1 <= sum2 && j + 1 < q) {
                if (int('A') <= int(s[j + 1]) && int('Z') >= int(s[j + 1])) {
                    for(int k = 0; k < g; k++){
                        res += s[j + 1];}
                }
            }
            
            sum2 += 1;
        }

        cout << res << endl;
    }

    return 0;
}
