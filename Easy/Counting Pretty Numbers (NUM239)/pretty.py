def input_num():
    tmp = input()
    a = tmp.split(" ")[0]
    b = tmp.split(" ")[1]
    return int(a), int(b)

num_first = int(input())
count_list = []
for i in range(num_first):
    a , b = input_num()
    count = 0
    for i in range(a, b+1):
        if str(i)[-1] == "2" or str(i)[-1] == "3" or str(i)[-1] == "9":
            count += 1
    count_list.append(count)
for i in count_list:
    print(i)


        