#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);
int main()
{
    int num1[]={1,3};
    int num2[]={4,5,7,8};
    printf("%f",findMedianSortedArrays(num1,2,num2,4));
    return 0;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int sign1=0,sign2=0;
    double num1=0.0,num2=0.0;
    while(sign1+sign2<(nums1Size+nums2Size)/2+1){
        if(sign1==nums1Size){
            sign2++;
            if(num1<num2)
                num1=(double)nums2[sign2-1];
            else  num2=(double)nums2[sign2-1];
        }
        else{
            if(sign2==nums2Size){
                sign1++;
                if(num1<num2)
                    num1=(double)nums1[sign1-1];
                else  num2=(double)nums1[sign1-1];
            }
            else{
                    if(nums1[sign1]<nums2[sign2]){
                        sign1++;
                    if(num1<num2)
                        num1=(double)nums1[sign1-1];
                    else  num2=(double)nums1[sign1-1];
                    }
                    else {
                            sign2++;
                            if(num1<num2)
                                num1=(double)nums2[sign2-1];
                            else  num2=(double)nums2[sign2-1];
                    }
                }
        }
    }
    if((nums1Size+nums2Size)%2==0)
        return (num1+num2)/2.0;
    else{
        if(num1>num2)
            return num1;
        else return num2;
    }
}
