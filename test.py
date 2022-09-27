#Code Written by : John Nixon
#Date: 27:09:2022  Time: 12:25:12
#Copyrights are applicable
import sys
import os
sys.setrecursionlimit(10000)
try:
    sys.stdin = open('./input.txt', 'r')
    sys.stdout = open('./input.txt', 'w')
except:
    pass

n = 10**7
print(n)
arr = [i+1 for i in range(n)]
print(*arr)
key = 6
print(key)
