/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** pos_verif
*/

#include "navy.h"

int verif_of_sep(char *str)
{
    int j = 1;
    while (j < 25) {
        if (str[j] == ':')
            j = j + 3;
        else
            return (0);
        if (str[j] == ':')
            j = j + 5;
        else
            return (0);
    }
    return (1);
}

int verif_of_size(char *str)
{
    int i = 0;
    int j = 0;

    while (i < 22) {
        if (str[i] > 49 + j && str[i] < 54) {
            i = i + 8;
            j = j + 1;
        }else
            return (0);
    }
    return (1);
}

int verif_of_input_pos(char *str)
{
    int i = 2;
    int j = 3;

    while (i < 26 && j < 27) {
        if (str[i] > 64 && str[i] < 73)
            i = i + 3;
        else if (str[j] > 48 && str[j] < 57)
            j = j + 3;
        else
            return (0);
        if (str[i] > 64 && str[i] < 73)
            i = i + 5;
        else if (str[j] > 48 && str[j] < 57)
            j = j + 5;
        else
            return (0);
    }
    return (1);
}