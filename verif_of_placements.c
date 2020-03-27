/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** put_boats
*/

#include "navy.h"

int verif_of_placements(char **boat_pos)
{
    int i = 0;
    int s = 0;
    char **pos = malloc(sizeof(char *) * 4096);

    while (boat_pos[i] != NULL) {
        s = char_to_int(boat_pos[i]);
        pos = str_to_tab(boat_pos[i], ":");
        if (dif1(pos, s) != 0 && dif2(pos, s) != 0) {
            free(pos);
            return (84);
        }else if ((dif1(pos, s) != 0 && dif2(pos, s) == 0) ||
        (dif1(pos, s) == 0 && dif2(pos, s) != 0)) {
            free(pos);
            i = i + 1;
        }

    }
    return (0);
}

int dif1(char **pos, int size)
{
    int i = 1;
    int j = 0;
    int k = 2;
    int stock = 0;

    if (pos[i][j] == pos[k][j] && pos[i][j + 1] == pos[k][j + 1])
        return (1);
    else if (pos[i][j] == pos[k][j] && pos[i][j + 1] < pos[k][j + 1]) {
        stock = pos[k][j + 1] - pos[i][j + 1];
        if (stock + 1 == size)
            return (0);
    }else if (pos[i][j] == pos[k][j] && pos[i][j + 1] > pos[k][j + 1]) {
        stock = pos[i][j + 1] - pos[k][j + 1];
        if (stock + 1 == size)
            return (0);
    }
    return (1);
}

int dif2(char **pos, int size)
{
    int i = 1;
    int j = 1;
    int k = 2;
    int stock = 0;

    if (pos[i][j] == pos[k][j] && pos[i][j - 1] == pos[k][j - 1])
        return (1);
    else if (pos[i][j] == pos[k][j] && pos[i][j - 1] < pos[k][j - 1]) {
        stock = pos[k][j - 1] - pos[i][j - 1];
        if (stock + 1 == size)
            return (0);
    }else if (pos[i][j] == pos[k][j] && pos[i][j - 1] > pos[k][j - 1]) {
        stock = pos[i][j - 1] - pos[k][j - 1];
        if (stock + 1 == size)
            return (0);
    }
    return (1);
}