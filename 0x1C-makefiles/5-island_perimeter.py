#!/usr/bin/python3

"""_summary_
"""


def island_perimeter(grid):
    """_summary_

    Args:
        grid (_type_): _description_

    Returns:
        _type_: _description_
    """
    if not grid or not grid[0]:
        return 0

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                # Check left cell
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                # Check upper cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
