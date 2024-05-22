#include <stdio.h>
int main()
{int size=5,i,element;
    int *ptr;
    ptr = (int*) malloc (size *sizeof(int));

    for (i = 0; i < size; i++)
    {
                    printf("Please enter element in array.\n");
            scanf("%d, ", &element);
            ptr[i] = element;
    }
              for (i = 0; i < size; i++)
    {
        {
            printf("\n %d", ptr[i]);
        }
    }

size=10;
int *newptr=(int *) realloc (ptr, size * sizeof(int));
if (newptr == NULL) {
        printf("Memory reallocation failed\n");
        free (ptr); 
        return 1; 
    }

        for (i = 0; i < size; i++)
    {
                    printf("Please enter element in array.\n");
            scanf("%d, ", &element);
            ptr[i] = element;
    }
              for (i = 0; i < size; i++)
    {
        {
            printf("\n %d", ptr[i]);
        }
    }
}