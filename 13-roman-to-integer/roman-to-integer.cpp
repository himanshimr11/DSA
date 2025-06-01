class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>romanmap={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int i,result=0;
        int n=s.length();
        for(i=0;i<n;i++){
            if(i+1<n && romanmap [s[i]]<romanmap [s[i+1]]){
                result -=romanmap[s[i]];
            }
                else{
                result +=romanmap[s[i]];
                }
            }
         return result;
    }
};