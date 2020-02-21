#!/usr/bin/python3
"""
5-island_perimeter.py
"""
def island_perimeter(grid):
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i > 0:
                    north = grid[i-1][j]
                else:
                    north = 0
                if j < len(grid[i]) - 1:
                    east = grid[i][j+1]
                else:
                    east = 0
                if i == len(grid) - 1:
                    south = 0
                else:
                    south = grid[i+1][j]
                if j > 0:
                    west = grid[i][j-1]
                else:
                    west = 0

                if north == 0:
                    perimeter += 1
                if east == 0:
                    perimeter += 1
                if south == 0:
                    perimeter += 1
                if west == 0:
                    perimeter += 1
    return perimeter
