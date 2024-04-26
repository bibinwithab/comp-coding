int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    //going through the array in a double for loop and checking if sum of 2 elements equals the target. we return the index in a array alongside the size of the same

    //Time: O(n^2)

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


//using rust. Time:O(n)

//goes through each number in the list and calculates what other number we need to reach the target by subtracting the current number from the target. If we've already seen this needed number before, it means we've found the pair that adds up to the target, so it returns their positions. Otherwise, it stores the current number in the HashMap for future reference.

use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut map = HashMap::new();

        for (index, current_element) in nums.iter().enumerate(){
            let needed = target - current_element;

            if map.contains_key(&needed){
                return vec![map[&needed], index as i32];
            }
            map.insert(current_element, index as i32);

        }
        return Vec::new();
    }
}