#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
	int x;
	int y;
} Point;

int main()
{
	Point **pointsArray;
	int size = 5;

	// Allocate memory for the array of pointers
	pointsArray = (Point **)malloc(size * sizeof(Point *));

	// Allocate and assign values to each Point
	for (int i = 0; i < size; i++)
	{
		pointsArray[i] = (Point *)malloc(sizeof(Point));
		pointsArray[i]->x = i * 10; // Example values
		pointsArray[i]->y = i * 20; // Example values
	}

	// Access and print each point's values
	for (int i = 0; i < size; i++)
	{
		printf("Point %d: x = %d, y = %d\n", i, pointsArray[i]->x, pointsArray[i]->y);
	}

	// Free the memory
	for (int i = 0; i < size; i++)
	{
		free(pointsArray[i]);
	}
	free(pointsArray);

	return 0;
}