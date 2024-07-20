#include <stdio.h>
#include <stdlib.h>

int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    while (low <= high && value >= array[low] && value <= array[high]) {
        if (low == high) {
            if (array[low] == value) {
                printf("Value checked array[%zu] = [%d]\n", low, array[low]);
                return low;
            }
            return -1;
        }

        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos >= size) {
            printf("Value checked array[%zu] is out of range\n", pos);
            return -1;
        }

        printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value) {
            return pos;
        }
        if (array[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}
