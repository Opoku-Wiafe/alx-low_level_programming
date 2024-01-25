#!/usr/bin/python3
""" check the paramiter """


def island_perimeter(grid):
    """doc doc"""
    count = 0
    for row_i in range(len(grid)):
        for col_i in range(len(grid[row_i])):
            if grid[row_i][col_i] == 1:
                count += count_water(grid, row_i, col_i)
    return counter


def count_water(grid, row_i, col_i):
    """check  the water"""
    count = 0
    value = grid[row_i][col_i]
    max_i_col = len(grid[row_i]) - 1
    max_i_row = len(grid) - 1
    if col_i > 0:
        left = grid[row_i][col_i - 1]
        if left == 0:
            count += 1
    else:
        count += 1
    if col_i < max_i_col:
        right = grid[row_i][col_i + 1]
        if right == 0:
            count += 1
    else:
        count += 1
    if row_i > 0:
        up = grid[row_i - 1][col_i]
        if up == 0:
            count += 1
    else:
        count += 1
    if row_i < max_i_row:
        down = grid[row_i + 1][col_i]
        if down == 0:
            count += 1
    else:
        count += 1
    return count
