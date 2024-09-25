class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        d=dict(zip(heights,names))
        heights.sort(reverse=True)
        for i in range(len(heights)):
            names[i]=d[heights[i]]
        return names
        