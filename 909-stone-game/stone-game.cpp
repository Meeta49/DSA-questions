class Solution {
public:
    bool stoneGame(vector<int>& piles) 
    {
       int n=piles.size();
       for(int i=0;i<n;i++) 
       {
        if(piles[i]%2==0)
        {
            return true;
        }
        
       }
       return false;
    }
};