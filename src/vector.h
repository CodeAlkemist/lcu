//
// Created by mxs on 10/08/18.
//

#ifndef LCU_VECTOR_H
#define LCU_VECTOR_H

typedef struct __lcu_vector_base
{
    void *contents;
    unsigned int item_size;
    unsigned int step_size;
    unsigned int actual_size;
    unsigned int used_size;
    unsigned int position;
} lcu_vector_t;



#endif //LCU_VECTOR_H
