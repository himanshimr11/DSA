class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count[501] = {0};  
    for (int num : arr) {
        count[num]++;
    }
    int lucky = -1;
    for (int i = 1; i <= 500; ++i) {
        if (count[i] == i) {
            lucky = i; 
        }
    }
   return lucky;
}

        
    
};