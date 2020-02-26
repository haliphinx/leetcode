class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height)-1
        size = 0
        while left<right:
            flg = 0
            m_size = min(height[left], height[right]) * (right - left)
            if m_size>size:
                size = m_size
            if height[left]<height[right]:
                for i in range(left+1, right):
                    if height[i]>height[left]:
                        left = i
                        flg = 1
                        break
            else:
                for i in range(right-1, left,-1):
                    if height[i]>height[right]:
                        right = i
                        flg = 1
                        break
            if flg == 0:
                break
        return size