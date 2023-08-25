#!/usr/bin/python3



def island_perimeter(grid):
    """ 
    a function def island_perimeter(grid): that returns 
    the perimeter of the island described in grid

    """
    perimeter = 0
    w = len(grid) - 1
    for i in range(len(grid)):
        for x in range(len(grid[i])):
            if grid[i][x] == 1:
                if i == 0 or grid[i - 1][x] == 0:
                    perimeter += 1
                if i == w or grid[i + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[i][x - 1] == 0:
                    perimeter += 1
                if x == w or grid[i][x + 1] == 0:
                    perimeter += 1
    return perimeter
