class Solution {
public:
    bool canJump(vector<int>& num) {
       int maxi=0;
       for(int i=0;i<num.size();i++){
        if(i>maxi)return false;
        maxi=max(maxi,i+num[i]);
       } 
       return true;
    }
};