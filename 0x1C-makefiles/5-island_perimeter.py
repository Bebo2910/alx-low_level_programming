#!/usr/bin/python3
""" island_perimeter function """


def island_perimeter(grid):
    """
    Returns perimeter of an island from data in the gird
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edge = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    perimeter = 4 * size - 2 * edge
    return perimeter
