#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
            grid (list): A list of list of integers representing an island.
    Returns:
            The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for c in range(width):
            if grid[k][c] == 1:
                size += 1
                if (c > 0 and grid[k][c - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][c] == 1):
                    edges += 1
    return size * 4 - edges * 2
