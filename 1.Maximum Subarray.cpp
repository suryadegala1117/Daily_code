/*Today i woke up at 5'O clock and i solved striver bhaiyya's kadanes algorith'''
''' It would be as adding sum if sum is -ve then discard sum otherwise keep it'''
'''The code of the soluton is*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int   numsSize=nums.size();
        int i,sum=0,sum1=nums[0];
    for(i=0;i<numsSize;i++){
      sum+=nums[i];
        sum1=fmax(sum,sum1);
        //printf("%d %d\n",sum,sum1);
        if(sum<0)
            sum=0;
    }
    return sum1;    
    }
};
