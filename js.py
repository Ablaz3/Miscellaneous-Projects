import random
square_Length = 6
viewable_skyscrapers_list = [[[4,0],[0,0],[3,0],[3,4],[0,0],[0,0]], [[3,0],[0,4],[0,0],[6,0],[0,5],[3,3]]]
# structure: total[column[[top, bottom], ...], row[[left, right],...]]

def random_Matrix_Gen():
  temp_List = [[0 for _ in range(square_Length)] for _ in range(square_Length)]
  temp_List[3] = [1,2,3,4,5,6]
  for i in range(square_Length):
    if i == 3:
        continue
    temp_Row_Numbers = [] #create a temporary list that contains all numbers which will be put into a row
    stand_Row_Numbers = [i for i in range(1,square_Length+1,1)]
    while True:
        num = stand_Row_Numbers[random.randint(0,square_Length-1)]
        if num not in temp_Row_Numbers:
            temp_Row_Numbers.append(num)
        if len(temp_Row_Numbers)==square_Length:
            break
    for j in range(square_Length):
        temp_Column_List = [] #store the numbers already present in the column
        for k in range(square_Length):
            temp_Column_List.append(temp_List[k][j])
        for k in range(len(temp_Row_Numbers)):
            if temp_Row_Numbers[k] not in temp_Column_List:
                temp_List[i][j] = temp_Row_Numbers[k]
                temp_Row_Numbers.pop(k)
                break
            if k ==len(temp_Row_Numbers)-1:
                return False
  return temp_List

#check view
def check_view(mtrx, src_ls):
    for i in range(square_Length):
        if src_ls[0][i][0] != 0:
            counter = 0
            highest_num = 0
            for j in range(square_Length):
                if mtrx[j][i] > highest_num:
                    highest_num = mtrx[j][i]
                    counter += 1
            if src_ls[0][i][0] != counter:
                return False
        if src_ls[0][i][1] != 0:
            counter = 0
            highest_num = 0
            for j in range(square_Length)[::-1]:
                if mtrx[j][i] > highest_num:
                    highest_num = mtrx[j][i]
                    counter += 1
            if src_ls[0][i][1] != counter:
                return False
    for i in range(square_Length):
        if src_ls[1][i][0] != 0:
            counter = 0
            highest_num = 0
            for j in range(square_Length):
                if mtrx[i][j] > highest_num:
                    highest_num= mtrx[i][j]
                    counter += 1
            if src_ls[1][i][0] != counter:
                return False
        if src_ls[1][i][1] != 0:
            counter = 0
            highest_num = 0
            for j in range(square_Length)[::-1]:
                if mtrx[i][j] > highest_num:
                    highest_num= mtrx[i][j]
                    counter += 1
            if src_ls[1][i][1] != counter:
                return False
    return True

#run the simulation
iter_Matrix = []
countnum = 0
while True:
    iter_Matrix = random_Matrix_Gen()
    if iter_Matrix == False:
        continue
    if countnum % 10000 == 0:
        print(countnum)
    countnum += 1
    if check_view(iter_Matrix, viewable_skyscrapers_list):
        break
for i in range(square_Length):
    print(iter_Matrix[i])