class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        s = set(candies)
        if len(s) > len(candies) / 2:
            return int(len(candies) / 2)
        else:
            return int(len(s))