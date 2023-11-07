
#ifndef _queue_array_h

#define _queue_array_h

#include"Platform_Types.h"
typedef struct
{
    void  **queuearray;
    uint32_t queueMaxSize;
    uint32_t Elementcount;
    uint32_t queueFront;
    uint32_t queueRear;



} queue_t;

typedef enum
{
    queue_nok = 0;
    queue_ok ;

}queueStatus_t;
Queue_t *CreateQueue(uint32 maxSize, QueueStatus_t *ret_status);
QueueStatus_t EnqueueElement(Queue_t *queue_obj, void *item_ptr);
void *DequeueElement(Queue_t *queue_obj, QueueStatus_t *ret_status);
void *QueueFront(Queue_t *queue_obj, QueueStatus_t *ret_status);
void *QueueRear(Queue_t *queue_obj, QueueStatus_t *ret_status);
QueueStatus_t GetQueueCount(Queue_t *queue_obj, uint32 *QueueCount);
QueueStatus_t DestroyQueue(Queue_t *queue_obj);




#endif // _queue_array_h


