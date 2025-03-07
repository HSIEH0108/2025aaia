# week03-1.py
# leetcode 2579. Count total number of colored cells
class Solution:
    def coloredCells(self, n: int) -> int:
        return n*n+(n-1)*(n-1)
        #觀察題目的圖片(不用看文字)
