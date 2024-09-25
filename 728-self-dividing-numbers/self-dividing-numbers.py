class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        res=[]
        flag=1
        for i in range(left,right+1):
            st = str(i)
            flag = 1
            for j in st:
                if (int(j)==0 or i%int(j)!=0):
                    flag = 0
                    break
            if(flag):
                res.append(i)
        return res


        