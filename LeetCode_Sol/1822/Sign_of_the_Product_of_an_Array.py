class Solution:
    def arraySign(self, nums: List[int]) -> int:
        ne=0
        po=0
        if 0 in nums:
            return 0
        else:
            for i in nums:
                if i<0:
                    ne+=1
        if ne%2==1:
            return -1
        else:
            return 1