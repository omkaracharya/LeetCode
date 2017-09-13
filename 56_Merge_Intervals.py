# Definition for an interval.
# class Interval(object):
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: List[Interval]
        """
        ans = list()
        for interval in sorted(intervals, key = lambda k : k.start):
            if ans and interval.start <= ans[-1].end:
                ans[-1].end = max(ans[-1].end, interval.end)
            else:
                ans.append(interval)
        return ans
