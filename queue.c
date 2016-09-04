#include "queue.h"

//------------------------------------------------------------------------------
// Insere um elemento no final da fila.
// Condicoes a verificar, gerando msgs de erro:
// - a fila deve existir
// - o elemento deve existir
// - o elemento nao deve estar em outra fila
void queue_append (queue_t **queue, queue_t *elem){
    // check if *elem is isolate
    if(elem->next != NULL || elem->prev != NULL)
        return;

    // get last queue element
    queue_t *aux = (*queue)->prev;
    aux->next = elem;
    (*queue)->prev = elem;
}

//------------------------------------------------------------------------------
// Conta o numero de elementos na fila
// Retorno: numero de elementos na fila
int queue_size (queue_t *queue){
    // empty queue
    if(!queue)
        return 0;

    // only one element
    if ((queue->next == queue) && (queue->prev == queue))
        return 1 ;

    // iterate through queue
    queue_t *aux = queue;
    int size = 0;
    do
    {
        aux = aux->next;
        size++;
    }
    while (aux != queue);

    return size;
}

queue_t *queue_remove (queue_t **queue, queue_t *elem){
    return *queue;
}

void queue_print (char *name, queue_t *queue, void print_elem (void*) ){
    return;
}