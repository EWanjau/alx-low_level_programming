#!/usr/bin/python3

""" the module calculates the perimeter of an island
with the coordinates given
"""


def island_perimeter(grid):
    """finds the perimeter of an area surrounded by a grid
        args:
            grid: list of list of coordiantes

        return:
            the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    sides = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sides += 1
    return size * 4 - sides * 2
