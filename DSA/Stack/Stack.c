#include <stdio.h>

struct Stack
{
    int arr[10];
    int size;
    int max_capacity;
};

int main()
{
    struct Stack stack;
    int Option;

    stack.max_capacity = 3;
    stack.size = 0;

    while (1)
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
            if (stack.size != stack.max_capacity)
            {
                printf("Entre value: ");
                scanf("%d", &stack.arr[stack.size]);
                stack.size++;
            }
            else
            {
                printf("Not more space to push!\n");
            }
        }
        else if (Option == 3)
        {
            if (0 <= stack.size)
            {
                stack.size--;
                printf("Successfully done!\n");
            }
            else
            {
                printf("Not more space to pop!\n");
            }
        }
        else if (Option == 4)
        {
            if (stack.size >= 0)
            {
                printf("%d\n", stack.arr[stack.size - 1]);
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