class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n==3:
            return True
        res=0
        while(n>0):
            res=n%10+res
            n=n/10
            print res
        if(res==9):
            return True
        else:
            return False
