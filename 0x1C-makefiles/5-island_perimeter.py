#!/usr/bin/python3

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
    col = len(grid)
    rows = len(grid[0])

    for i in range(col):
        for j in range(rows - 1):
            if grid[i][j] == 1:
                perimeter += 2
                if grid[i][j + 1] == 0:
                    continue
                else:
                    break

    for i in range(rows - 1):
        for j in range(col):
            if grid[j][i] == 1:
                perimeter += 2
                if grid[j][i + 1] == 1:
                    break
                break

    return perimeter
