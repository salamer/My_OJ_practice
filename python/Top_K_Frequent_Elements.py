class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        nums=nums.sort()
        count={}
        count[nums[1]]=1
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                count[nums[i]]+=1
            else:
                count[nums[i]]=1

        res=[]
        for i in range(k):
            
