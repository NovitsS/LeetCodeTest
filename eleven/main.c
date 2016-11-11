#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int* nums, int numsSize) ;
int main()
{
    int nums[]={1,1,2,2};
    printf("%d",removeDuplicates(nums,4));
    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0)
    return 0;
    int i,p=1;
    int num=nums[0];
    for(i=1;i<numsSize;i++){
        if(nums[i]!=num){
            num=nums[i];
            nums[p]=num;
            p++;
        }
    }
    return p;
}
