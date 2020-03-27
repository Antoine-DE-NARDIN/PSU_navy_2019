/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** win_or_loose
*/

#include "navy.h"

int scan_map(char **tab)
{
    int i = 2;
    int j = 2;

    while (tab[i] != NULL) {
        while (tab[i][j] != '\0') {
            if (tab[i][j] > 49 && tab[i][j] < 54) {
                ++j;
                return (1);
            }
            j = j + 1;
        }
        ++i;
        j = 2;
    }
    return (0);
}

int scan_the_hit(char **tab)
{
    int i = 2;
    int j = 2;
    int x = 0;

    while (tab[i] != NULL) {
        while (tab[i][j] != '\0') {
            if (tab[i][j] == 'x') {
                ++j;
                ++x;
            }
            j = j + 1;
        }
        ++i;
        j = 2;
    }
    return (x);
}