#include <stdio.h>

int Inderpolation_search(float arr[], float temp, int count, float closest_location, float element, int low, int high, int search_index)
{
    search_index = low + (high - low) * (element - arr[low]) / (arr[high] - arr[low]);
    if (temp <= closest_location)
    {
        closest_location = temp;

        count++;
    }
    if (count == 3)
    {
        return search_index;
    }

    if (arr[search_index] > element)
    {
        closest_location = arr[search_index] - element;
        high = search_index - 1;
        Inderpolation_search(arr, temp, count, closest_location, element, low, high, search_index);
    }
    else
    {
        temp = element - arr[search_index];
        low = search_index + 1;
        Inderpolation_search(arr, temp, count, closest_location, element, low, high, search_index);
    }
}

int main()
{
    float List_Locations[] = {37.7749, 122.4194, 34.0522, 118.2437, 40.7128, 74.0060};
    float Target_Coordinate = 38.9072;

    int low = 0;
    int size = sizeof(List_Locations) / sizeof(float);
    int high = size - 1;
    float temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (List_Locations[i] > List_Locations[j])
            {
                temp = List_Locations[i];
                List_Locations[i] = List_Locations[j];
                List_Locations[j] = temp;
            }
        }
    }
    int search_index = Inderpolation_search(List_Locations, 1000000000000000, 0, 100000000000000, Target_Coordinate, low, high, search_index);
    printf("The closest location is %f \n", List_Locations[search_index]);

    return 0;
}