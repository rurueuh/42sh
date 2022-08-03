/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-42sh-tiago.guterres-rodrigues
** File description:
** malloc
*/

#ifndef MALLOC_H_
    #define MALLOC_H_

    typedef struct list_malloc {
        void *ptr;
        struct list_malloc *next;
    } list_malloc;

    void add_ptr_to_all_malloc(void *ptr, list_malloc **head);
    void my_free(void *ptr, list_malloc **head);
    void *add_malloc(signed long size, list_malloc **head);
    void free_all_malloc(list_malloc *head, int status);

#endif
