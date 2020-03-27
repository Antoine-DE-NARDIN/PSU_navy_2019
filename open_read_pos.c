/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** open_read_pos
*/

#include "navy.h"

char **get_positions(char *str)
{
    char *buf = malloc(sizeof(char) * 4096);
    for (int i = 0; i != 4096; i = i + 1)
        buf[i] = '\0';
    char **info = malloc(sizeof(char *) * 4096);
    buf = open_read(str, buf);

    if (buf == NULL)
        return (NULL);
    else {
        if (verif_of_file(buf) == 1) {
            info = str_to_tab(buf, "\n");
        }else
            return (NULL);
    }
    free(buf);
    return (info);
}

char *open_read(char *str, char *buf)
{
    int fd = 0;
    fd = open(str, O_RDONLY);
    read(fd, buf, 4096);
    return (buf);
}

int verif_of_file(char *str)
{
    if (verif_of_size(str) == 1 && verif_of_input_pos(str) == 1 &&
verif_of_sep(str) == 1) {
        return (1);
    }else
        return (0);
}