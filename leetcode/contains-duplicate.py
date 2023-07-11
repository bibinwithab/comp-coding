class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:

        #adding nums in a hashset and cheking if there is any dupicate element of nums

        hashset = set()

        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        return False