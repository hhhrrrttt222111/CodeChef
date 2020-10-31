def binaryConcatenation(num, seq):
    #split input into list and work with start and end values
    seq_list = seq.split(" ")

    #convert numbers in sequence to binary strings
    bin_x = bin(int(seq_list[0]))[2:]
    bin_y = bin(int(seq_list[-1]))[2:]

    #concatenate binary strings
    binXpluxY = bin_x + bin_y
    binYplusX = bin_y + bin_x

    #convert strings to int
    XplusY = int(binXpluxY, 2)
    YplusX = int(binYplusX, 2)

    #difference
    return XplusY - YplusX

#Main function to call binaryConcatenation() on test cases
def main():
    test_cases = int(input("Number of Test Cases: "))
    results = []

    #prompt the inputted amount of test cases
    for test_cases in range(test_cases):
        num = int(input("Enter an Integer: "))
        seq = input("Enter a Sequence: ")
        results.append(binaryConcatenation(num, seq))

    for num in results:
        print(num)

main()