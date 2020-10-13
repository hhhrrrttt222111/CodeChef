w, b = input().split()              
w = int(w)                        
b = float(b)                            
if (w % 5 == 0 and b>(w+.5)):
    b = b - w - 0.5     
    print('%.2f' % b)
else:
    print('%.2f' % b)