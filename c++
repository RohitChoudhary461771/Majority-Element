Input: nums = [2,2,1,1,1,2,2]
Output: 2



class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    
    //👉 better approach T.C O(nlog n), S.C O(n).

     map <int,int>mpp;
      for(auto it : nums){
          mpp[it]++;
      }
     
      int maj= n/2;
     
      int ans=0;
      for(auto it:mpp){
          if(it.second>maj){
              ans= it.first;
          }
      }
      return ans;

    //👉 Moore's Voting Algorithm           Input: nums = [2,2,1,1,1,2,2]
Output: 2

        int cnt=0;
        int element=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                element=nums[i];
            }
            else if(nums[i]==element){
                cnt++;
            }
            else{
                cnt--;
            }
        } 
return element;
    }
};
