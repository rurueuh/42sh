/*
** EPITECH PROJECT, 2021
** header for my.h
** File description:
** my
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef header
    #define header
        #include "minishell.h"
        void init_env(char **envi, core_s *mini_s);
        core_s *main_init(char **env);
        void init_command(char *cmd, core_s *all);
        void free_command(char ***command);
        void free_env(core_s *all);
        void free_all(core_s *all);
        int check_builtin(char **command, core_s *all);
        void cd_cmd(core_s *all, char **command);
        char *get_env(core_s *all, char *str);
        void print_env(core_s *all, char *command);
        void pipe_handling(char **allcmd, core_s *all);
        void set_env(core_s *all, char *name, char *line);
        void unset_env(core_s *all, char *name);
        int check_pipe(char **cmd);
        int check_small_small(char **command, core_s *all);
        void exit_cmd(core_s *all, char **command);
        void command_handling(core_s *all, char *buff);
        void get_commands(core_s *all);
        int path_handling(core_s *all, char **command);
        void try_cmd(core_s *all, char **command, char *buff);
        int execute(char *cmd_path, char **command, core_s *all);
        void error_exit(core_s *all);
        char *ask_input(core_s *all);
        void ask_good_input(char *command);
        void shell_loop(core_s *all);
#endif
