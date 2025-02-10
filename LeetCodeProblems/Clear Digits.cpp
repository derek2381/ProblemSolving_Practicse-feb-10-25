// Problem Link
// https://leetcode.com/problems/clear-digits/description/

// Source Code

class Solution {
public:
    string clearDigits(string s) {
       stack<char> stk;

       string res = "" ;

       for(char c : s){
        if((c - '0') >= 0 && (c -'0') <= 9){
            stk.pop();
        }else{
            stk.push(c);
        }
       }

       while(!stk.empty()){
        res = stk.top() + res;
        stk.pop();
       }


       return res;
    }
};