class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    vector<char> stor;
    int sum = 0;
        for (char ch : chars){
            stor.push_back(ch);
        }
        for ( const string& word : words){
            vector<char> stor1=stor;
            int len = 0;
            for (int i = 0; i < word.length(); i++){
                for (int j = 0; j < stor1.size(); j++){
                    if (word[i] == stor1[j]){
                        len++;
                        stor1.erase(stor1.begin()+j);
                        break;

                    }
                }
                if(len==word.length()){
                    sum+=word.length();
                } 
            }
        }
    return sum;
    }
};