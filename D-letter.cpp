// Monocarp wants to send a letter. His letter consists of 𝑛
//  words. Unfortunately, the maximum length of one message Monocarp can send is limited to 𝑘
//  characters, so Monocarp may have to split his letter into multiple messages.

// The letter can be split into groups of consecutive words, but it is impossible to split the words themselves.
//In each group, each pair of adjacent words should be separated by a space. Note that Monocarp can't change the order of words in a letter. 
//Each resulting part of the letter should consist of at most 𝑘
//  characters (including the spaces between words).

// For example, if a letter looks like "please buy the cereal", and 𝑘=10, then the letter can be split into two messages "please buy" and "the cereal", each consisting of 10
//  characters.

// Your task is to calculate the minimum number of messages required to send all 𝑛
//  given words. Remember that you can't reorder the words.

// Input
// The first line contains two integers 𝑛
//  and 𝑘
//  (1≤𝑛≤103; 1≤𝑘≤2⋅105) — the number of words in the letter and the maximum message length, respectively.

// The next 𝑛 lines contain words of the letter, one per line — strings consisting of lowercase Latin letters. Each word consists of at most 100
//  characters.

// Additional constraint on the input: the letter can be split into messages, i. e. the maximum length of the word in the input does not exceed 𝑘
// .

// Output
// Print a single integer — the minimum number of messages required to send all 𝑛
//  given words.
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
     int t,k;
     int m = 0;
     int a = 0;
    vector<string> l;
     cin >> t  >> k;
     for ( int i = 0; i<t ; i++){
        string s;
        cin >> s;
        l.push_back(s);
        m+=l[i].size()+1;
    
     }
     if(k>=m-1){
        cout << 1;
     }else{
     int current_message = 0;
     for (int i = 0; i<l.size(); i++){

        if (current_message+l[i].size() <=k ){
            current_message+=l[i].size()+1;
        }else{
            current_message = 0;
            a+=1;
            i-=1;
            }
     }
     cout << a+1;}

     return 0;
}
