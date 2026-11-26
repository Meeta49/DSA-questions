// class Solution {
// public:
//     int majorityElement(vector<int>& nums) 
//     {
//         unordered_map<int,int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(auto it:mp)
//         {
//             if(it.second>nums.size()/2)
//             {
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };




class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
       int cant=0;
       int count=0;
       for(int i=0;i<nums.size();i++)
       {
        if(count==0)
        {
            cant=nums[i];
        }
        if(nums[i]==cant)
        {
            count++;        //jb same element hoga 
        }
        else
        {
            count--;           //different element hoga
        }
       }
       return cant;
    }
};