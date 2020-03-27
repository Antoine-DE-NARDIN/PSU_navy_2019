/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** put_boats
*/

#include "navy.h"

char **prep_boats(char **map, char **boat_pos)
{
    int i = -1;
    char **pos = NULL;

    while (i < 3) {
        i = i + 1;
        pos = str_to_tab(boat_pos[i], ":");
        map = put_boats1(pos, map);
        map = put_boats2(pos, map);
        free(pos);
        pos = NULL;
    }
    return (map);
}

char **put_boats1(char **pos, char **map)
{
    int x1 = (pos[1][0] - 65) * 2 + 2;
    int y1 = pos[1][1] - 48 + 1;
    int x2 = (pos[2][0] - 65) * 2 + 2;
    int y2 = pos[2][1] - 48 + 1;

    if (x1 == x2 && y1 > y2) {
        while (y1 > y2 - 1) {
            map[y1][x1] = pos[0][0];
            y1 = y1 - 1;
        }
    }else if (x1 == x2 && y1 < y2) {
        while (y1 < y2 + 1) {
            map[y1][x1] = pos[0][0];
            y1 = y1 + 1;
        }
    }
    return (map);
}

char **put_boats2(char **pos, char **map)
{
    int x1 = (pos[1][0] - 65) * 2 + 2;
    int y1 = pos[1][1] - 48 + 1;
    int x2 = (pos[2][0] - 65) * 2 + 2;
    int y2 = pos[2][1] - 48 + 1;

    if (x1 > x2 && y1 == y2) {
        while (x1 > x2 - 2) {
            map[y1][x1] = pos[0][0];
            x1 = x1 - 2;
        }
    }else if (x1 < x2 && y1 == y2) {
        while (x1 < x2 + 2) {
            map[y1][x1] = pos[0][0];
            x1 = x1 + 2;
        }
    }
    return (map);
}