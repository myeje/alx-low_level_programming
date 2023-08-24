#!/usr/bin/python3
"""
function that returns the perimeter of the island in grid
"""

def island_perimeter(grid):
    """
    function that returns a perimeter
    """
    perimeter = 0
    rowlen = len(grid)
    columnlen = len(grid[0])
    for row in range(rowlen):
        for column in range(columnlen):
            if grid[row][column] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][column] == 1:
                    perimeter -= 1
                if row < rowlen - 1 and grid[row + 1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid[row][column - 1] == 1:
                    perimeter -= 1
                if column < columnlen - 1 and grid[row][column + 1] == 1:
                    perimeter -= 1
    return perimeter