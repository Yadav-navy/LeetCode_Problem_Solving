class Solution(object):
    def isPalindrome(self, x):
        b=abs(x)
        if x!=b:
            return False
        r=0
        a=x
        sign =-1 if a<0 else 1
        a = abs(a)
        while a:
            d= a % 10
            r= r * 10 + d
            a /= 10
            r= sign * r

        if r==x  :
            return True
        else:
            return False