//
// Created by mxs on 10/08/18.
//

#ifndef LCU_VECTOR_H
#define LCU_VECTOR_H

typedef struct __lcu_vector_base
{
    void *contents;
    void *caret;
    unsigned int item_size;
    unsigned int step_size;
    unsigned int actual_size;
    unsigned int used_size;
    unsigned int position;
    char initialized;
} lcu_vector_t;

void lcu_vector_init(lcu_vector_t *, unsigned int, unsigned int, unsigned int);

void lcu_vect_append(lcu_vector_t *, void *);

void lcu_vect_add(lcu_vector_t *, void *, int position);







#endif //LCU_VECTOR_H
