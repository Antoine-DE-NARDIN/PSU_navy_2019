/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** getpid.c
*/

#include "navy.h"

int get_the_pid(void)
{
    pid_t pid;
    pid = getpid();

    return (pid);
}