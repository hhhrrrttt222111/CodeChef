
testcase = int(input())
for _ in range(testcase):
    string = input()
    pattern = input()
    result = ""
    cnt = [0] * 26
    # Counting occurences of characters that doesn't contribute to pattern P
    for c in string:
        cnt[ord(c) - ord('a')] += 1
    
    for c in pattern:
        cnt[ord(c) - ord('a')] -= 1
        
    # flag = 1 : including p[0], add 'a' to p[0] to the front of P to yield smaller ordering
    flag = 1
    for i in range(1, len(pattern)):
        if pattern[i] == pattern[i-1]:
            continue
        
        if pattern[i] < pattern[i-1]:
            flag = 0
        
        break
    
    index = ord(pattern[0]) - ord('a') + flag
    for i in range(0, index):
        while cnt[i] > 0:
          result += chr(i + ord('a'))
          cnt[i] -= 1
            
        
    result += pattern
    
    for i in range(index, 26):
        while cnt[i] > 0:
          result += chr(i + ord('a'))
          cnt[i] -= 1
            
    print(result)