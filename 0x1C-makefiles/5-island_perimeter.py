#!/usr/bin/python3
'''

Island perimeter calculator for ALX tasks on
0x1C Makefiles

'''


def island_perimeter(grid):
    '''
    The island perimeter calculator function
    '''
    if type(grid) != list or grid == [] or grid == [[]]:
        return 0
    perimeter = 0
    for i in range(len(grid)):
        row = grid[i]
        for j in range(len(grid[i])):
            cell = row[j]
            if cell == 1:
                if row[j + 1] != 1:
                    perimeter += 1
                if row[j - 1] != 1:
                    perimeter += 1
                if grid[i + 1][j] != 1:
                    perimeter += 1
                if grid[i - 1][j] != 1:
                    perimeter += 1
    return perimeter
