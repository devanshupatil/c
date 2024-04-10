#include <stdio.h>

struct Queue_Item
{
    int count;
    int capacity;
};

struct Queue
{
    struct Queue_Item item;
    int arr[10];
};

int main()
{
    struct Queue queue;
    queue.item.capacity = 10;
    queue.item.count = 0;
    int Option;

    while (1)
    {
        printf("1. Exit, 2. enqueue, 3. dequeue, 4. Peek \n");
        printf("Enter option: ");
        scanf("%d", &Option);

        if (Option == 1)
        {
            break;
        }
        else if (Option == 2)
        {
            if (queue.item.capacity != 0)
            {
                printf("Enetr value: ");
                scanf("%d", &queue.arr[queue.item.count]); // strting put and remove strting
                queue.item.count++;
            }
            else
            {
                printf("Not more space to enqueue!\n");
            }
        }
        else if (Option == 3)
        {
            if (0 <= queue.item.count)
            {
                queue.item.count--;

                for (int i = 0; i < queue.item.capacity; i++)
                {
                    if (i == (queue.item.capacity - 1))
                    {
                        queue.arr[i] = 0;
                    }
                    else
                    {
                        queue.arr[i] = queue.arr[i + 1];
                    }
                }

                printf("Successfully done!\n");
            }
            else
            {
                printf("Not more value to dequeue!\n");
            }
        }
        else if (Option == 4)
        {
            if (queue.item.count == 0)
            {
                printf("%d", queue.arr[queue.item.count]);
            }
            else
            {
                printf("%d", queue.arr[queue.item.count - 1]);
            }
        }
        else
        {
            printf("Invalid!\n");
        }
    }
    return 0;
}
