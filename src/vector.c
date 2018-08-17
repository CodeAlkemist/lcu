//
// Created by mxs on 10/08/18.
//

#include <malloc.h>
#include "vector.h"

void lcu_vector_init(lcu_vector_t *self, unsigned int item_size, unsigned int step, unsigned int size_init)
{
    self->item_size = item_size;
    self->contents = malloc(item_size*size_init);
    if(!self->contents)
    {
        return;
    }
    self->caret = self->contents;
    self->item_size = item_size;
    self->step_size = step;
    self->actual_size = size_init;
    self->used_size = 0;
    self->position = 0;
    self->initialized = 1;
    
}