/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** error_exit
*/

#include "minishell.h"

void error_exit(core_s *all)
{
    free_all(all);
    exit(84);
}
