#include <stdio.h>

struct Stack_Item
{
    int size;
    int max_capacity;
};
struct Stack
{
    struct Stack_Item items;
    int arr[10];
};

int main()
{
    struct Stack stack;
    int Option;

    stack.items.max_capacity = 10;
    stack.items.size = 0;

    while (stack.items.size != stack.items.max_capacity)
    {
        printf("1. Exit, 2. Push, 3. Pop, 4. Peek\n");
        printf("Enter number of option: ");
        scanf("%d", &Option);

        if (Option == 1)
        {
            break;
        }
        else if (Option == 2)
        {
            printf("Entre value: ");
            scanf("%d", &stack.arr[stack.items.size]);
            stack.items.size++;
        }
        else if (Option == 3)
        {
            stack.items.size--;
            printf("Successfully done!\n");
        }
        else if (Option == 4)
        {
            if (stack.items.size != 0)
            {
                for (int i = 0; i < stack.items.size; i++)
                {
                    printf("%d = %d\n", i, stack.arr[i]);
                }
            }
            else
            {
                printf("Array is empty!\n");
            }
        }
        else
        {
            printf("Invalid!\n");
        }
    }

    return 0;
}