// class Solution             using the two pointer
// {
// public:
//     void reverseString(vector<char>& s) 
//     {
//        int i=0;
//        int j=s.size()-1;
//       while(i<j)
//       {
//         char temp=s[i];
//         s[i]=s[j];
//         s[j]=temp;
      
//       i++;
//       j--;
//       }
//     }
   
// };



// class Solution
// {
//     public:
//     void reverseString(vector<char>& s)
//     {
//         stack<char>st;
//         for(char ch:s)
//         {
//             st.push(ch);
//         }
//         for(int i=0;i<s.size();i++)
//         {
//             s[i]=st.top();
//             st.pop();
//         }
//     }
// };

class Solution
{
    public:
    void reverseString(vector<char>& s)
    {
        int n=s.size();
       int left=0;
       int right=n-1;
       while(left<right)
       {
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
       }
    }
};