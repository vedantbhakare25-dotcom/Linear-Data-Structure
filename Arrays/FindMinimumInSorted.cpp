//LEETCODE 153. Find Minimum in Rotated Sorted Array

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int smallest=nums[0];
//         for(int i=1;i<nums.size();i++)
//         {
//             if(smallest>nums[i])
//             {
//                 smallest=nums[i];
//             }
//         }
//     return smallest;   
//     }
// };