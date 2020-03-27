/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** print_map
*/

#include "navy.h"

void print_map(char **map)
{
    for (int i = 0; map[i] != NULL; i = i + 1) {
        for (int j = 0; map[i][j] != '\0'; j = j + 1)
            write(1 , &map[i][j], 1);
        my_putchar('\n');
    }
}