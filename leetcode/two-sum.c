int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int n = numsSize;
    
    int* arr;
    arr = (int*)malloc(sizeof(int) * 2);
    arr[0]=0;
    arr[1]=0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;

                arr[0]=i;
                arr[1]=j;

                return arr;
            }
        }
    }
    *returnSize=0;
    return 0;

}