#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in `grid`.
    """
    length = 0
    width = 0

    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if j > 0 and grid[i][j - 1] == 0:
                    length += 1
                if i > 0 and grid[i - 1][j] == 0:
                    width += 1

    return (length + width) * 2
