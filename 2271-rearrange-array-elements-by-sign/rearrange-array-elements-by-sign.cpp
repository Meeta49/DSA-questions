// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) 
//     {
//         vector<int> arr(nums.size());
//         int posindex=0;
//         int negindex=1;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]>=0){
//                 arr[posindex] = nums[i];
//                 posindex+=2;
//             }
//             else{
//                 arr[negindex] = nums[i];
//                 negindex+=2;
//             }

//         }
//         return arr;
//     }
// };






class Solution
{
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int>positive;
        vector<int>negative;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                positive.push_back(nums[i]);
            }
            else
            {
                negative.push_back(nums[i]);
            }
        }
        for(int i=0;i<positive.size();i++)
        {
            arr.push_back(positive[i]);
            arr.push_back(negative[i]);
        }
        return arr;
    }
};
