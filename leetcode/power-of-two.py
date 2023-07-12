class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        
        # in binary form, when we use 'bitwise and' operation in the number which is the power of 2 and its previous number, we get zero

        #3 :011
        #4 :100

        #7 :0111
        #8 :1000

        if n <= 0:
            return False
        elif n & n-1 ==0:
            return True