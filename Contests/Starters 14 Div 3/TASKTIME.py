import sys
input = sys.stdin.readline
# sys.setrecursionlimit(400000)
def I(): return input().strip()
def II(): return int(input().strip())
def LI(): return [*map(int, input().strip().split())]
import copy, string, math, time, functools, fractions
from heapq import heappush, heappop, heapify
from bisect import bisect_left, bisect_right
from collections import deque, defaultdict, Counter, OrderedDict
from itertools import permutations, chain, combinations, groupby
from operator import itemgetter
from types import GeneratorType  # for recursion
from typing import Iterable, TypeVar, Union  # for sorted set


for _ in range(II()):
    n, m, k = LI()
    c = LI()
    t = LI()
    d = defaultdict(list)
    for i in range(n):
        d[c[i]].append(t[i])
    arr = []
    for l in d.values():
        l.sort()
        arr.append(l[0])
        s = len(l)
        for i in range(1, s, 2):
            if i + 1 < s:
                arr.append(l[i] + l[i + 1])
    arr.sort()
    s = 0
    ans = 0
    for i in range(len(arr)):
        if s + arr[i] <= k:
            s += arr[i]
            ans += 1
    print(ans)