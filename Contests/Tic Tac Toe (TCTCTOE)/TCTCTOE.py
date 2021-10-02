# TCTCTOE_CODE
# May Long Challenge 2021- Division 3- Tic Tac Toe (TCTCTOE)

t = int(input())


for a in range(t):
    tic_tac_toe_matrix = []
    X = 0
    O = 0
    _ = 0
    for i in range(3):
        pattern = input()
        tic_tac_toe_matrix.append(pattern)

    for dev in range(3):
        for goel in range(3):
            if tic_tac_toe_matrix[dev][goel] == "X":
                X += 1
            elif tic_tac_toe_matrix[dev][goel] == "O":
                O += 1
            else:
                _ += 1

    countX = 0
    countO = 0

    # check for X
    if tic_tac_toe_matrix[0][0] == "X" and tic_tac_toe_matrix[0][1] == "X" and tic_tac_toe_matrix[0][2] == "X":
        countX = 1
    if tic_tac_toe_matrix[1][0] == "X" and tic_tac_toe_matrix[1][1] == "X" and tic_tac_toe_matrix[1][2] == "X":
        countX = 1
    if tic_tac_toe_matrix[2][0] == "X" and tic_tac_toe_matrix[2][1] == "X" and tic_tac_toe_matrix[2][2] == "X":
        countX = 1
    if tic_tac_toe_matrix[0][0] == "X" and tic_tac_toe_matrix[1][0] == "X" and tic_tac_toe_matrix[2][0] == "X":
        countX = 1
    if tic_tac_toe_matrix[0][1] == "X" and tic_tac_toe_matrix[1][1] == "X" and tic_tac_toe_matrix[2][1] == "X":
        countX = 1
    if tic_tac_toe_matrix[0][2] == "X" and tic_tac_toe_matrix[1][2] == "X" and tic_tac_toe_matrix[2][2] == "X":
        countX = 1
    if tic_tac_toe_matrix[0][0] == "X" and tic_tac_toe_matrix[1][1] == "X" and tic_tac_toe_matrix[2][2] == "X":
        countX = 1
    if tic_tac_toe_matrix[0][2] == "X" and tic_tac_toe_matrix[1][1] == "X" and tic_tac_toe_matrix[2][0] == "X":
        countX = 1

    # check for O
    if tic_tac_toe_matrix[0][0] == "O" and tic_tac_toe_matrix[0][1] == "O" and tic_tac_toe_matrix[0][2] == "O":
        countO = 1
    if tic_tac_toe_matrix[1][0] == "O" and tic_tac_toe_matrix[1][1] == "O" and tic_tac_toe_matrix[1][2] == "O":
        countO = 1
    if tic_tac_toe_matrix[2][0] == "O" and tic_tac_toe_matrix[2][1] == "O" and tic_tac_toe_matrix[2][2] == "O":
        countO = 1
    if tic_tac_toe_matrix[0][0] == "O" and tic_tac_toe_matrix[1][0] == "O" and tic_tac_toe_matrix[2][0] == "O":
        countO = 1
    if tic_tac_toe_matrix[0][1] == "O" and tic_tac_toe_matrix[1][1] == "O" and tic_tac_toe_matrix[2][1] == "O":
        countO = 1
    if tic_tac_toe_matrix[0][2] == "O" and tic_tac_toe_matrix[1][2] == "O" and tic_tac_toe_matrix[2][2] == "O":
        countO = 1
    if tic_tac_toe_matrix[0][0] == "O" and tic_tac_toe_matrix[1][1] == "O" and tic_tac_toe_matrix[2][2] == "O":
        countO = 1
    if tic_tac_toe_matrix[0][2] == "O" and tic_tac_toe_matrix[1][1] == "O" and tic_tac_toe_matrix[2][0] == "O":
        countO = 1

    if (countX == 1 and countO == 1) or (X - O) < 0 or (X - O) > 1:
        print(3)
    elif X == 1 and O == 9 and _ > 9:
        print(2)
    elif countX == 1 and countO == 0 and X > O:
        print(1)
    elif countX == 0 and countO == 1 and X == O:
        print(1)
    elif countX == 0 and countO == 0 and _ == 0:
        print(1)
    elif countX == 0 and countO == 0 and _ > 0:
        print(2)
    else:
        print(3)
