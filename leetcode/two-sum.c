int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    //going through the array in a double for loop and checking if sum of 2 elements equals the target. we return the index in a array alongside the size of the same

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