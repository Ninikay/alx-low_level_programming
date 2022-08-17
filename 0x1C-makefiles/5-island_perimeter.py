#!/usr/bin/python3
"""
    island_perimeter contains the island perimeter function
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island described in grid.
        Args:
            grid (list): list of lists
        Return:
            perimeter of the island
    """
    wz = 0
    lz = 1
    index_list = []
    perimeter = 0

    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b] is lz:
                perimeter += 4
                if a > 0 and grid[a][b - 1]:
                    perimeter -= 2
                if b > 0 and grid[a - 1][b]:
                    perimeter -= 2

    return perimeter
