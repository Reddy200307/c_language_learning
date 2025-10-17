#include<stdio.h>
int  hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    int cnt1=0,cnt2=0;
    if(nums[0]<nums[1])
    {
     cnt1=cnt2=2;
    }
    for(int i=k-1,j=(k-1)+2;i<k+2;i++,j++){
        if(nums[i]<nums[i+1])
        {
            cnt1++;
            printf(" nums[i]=%d %d %d \n",nums[i],nums[i+1],cnt1);

        }
        if((nums[j]<nums[j+1])&& cnt2<=2)
        {
            cnt2++;
                        printf("nums[j]=%d %d %d \n",nums[j],nums[j+1],cnt2);


        }
    }
    if((cnt1==2 ) && (cnt2==2))
    return 1;
    else
    return 0;
    
}
int main(){
    int nums[]={1,2,3,4,4,4,4,5,6,7};
    int numSize=sizeof(nums)/sizeof(nums[0]);
    int k=5;
    int value=hasIncreasingSubarrays(nums,numSize,k);
    printf("%d \n",value);
    return 0;
}