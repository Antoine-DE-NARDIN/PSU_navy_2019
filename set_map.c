/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** print_map.c
*/

#include "navy.h"

char **compute_all_process(void)
{
    char **map = malloc(sizeof(char *) * 4096);
    map = unbreakable_part(map);
    map = left_side_of_map(map);
    map = top_side_of_map(map);
    map = map_point(map);

    return (map);
}

char **unbreakable_part(char **map)
{
    int i = 0;
    int width = 11;
    int lengh = 17;

    while (i < width) {
        map[i] = malloc(sizeof(char) * 4096);
        for (int x = 0; x <= lengh; x++)
            map[i][x] = 0;
        i = i + 1;
    }
    map[width] = NULL;
    map[0][0] = ' ';
    map[0][1] = '|';
    map[1][0] = '-';
    map[1][1] = '+';

    return (map);
}

char **left_side_of_map(char **map)
{
    int i = 2;
    int j = 0;
    int num = 0;

    while (i < 10) {
        map[i][j] = 49 + num;
        i = i + 1;
        num = num + 1;
    }
    j = 1;
    i = 2;
    while (i < 10) {
        map[i][j] = '|';
        i = i + 1;
    }
    return (map);
}

char **top_side_of_map(char **map)
{
    int i = 0;
    int j = 2;
    int carac = 0;

    while (j < 17) {
        if (j % 2 == 0) {
            map[i][j] = 65 + carac;
            carac = carac + 1;
        }else
            map[i][j] = 32;
        j = j + 1;
    }
    j = 2;
    i = 1;
    while (j < 17) {
        map[i][j] = '-';
        j = j + 1;
    }
    return (map);
}

char **map_point(char **map)
{
    int i = 2;
    int j = 2;

    while (i < 11 && j < 17) {
        if (j % 2 == 0)
            map[i][j] = '.';
        else
            map[i][j] = 32;
        j = j + 1;
        if (j == 17) {
            i = i + 1;
            j = 2;
        }
    }
    return (map);
}