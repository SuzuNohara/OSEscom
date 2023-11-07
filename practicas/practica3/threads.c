#include <stdio.h>
#include <threads.h>
#include <time.h>

int startFibonacci(void* np);
long long int fibonacci(int n);

typedef struct ThreadData {
	time_t startTime;
	time_t endTime;
	int number;
} ThreadData;

int main(void) {
	ThreadData data[5] = { {NULL, NULL, 51},
	{NULL, NULL, 50},
	{NULL, NULL, 49},
	{NULL, NULL, 48},
	{NULL, NULL, 47} };
	thrd_t threads[5];
	printf("Fibonacci (50) and Fibonacci (51) in separate threads");

	for (size_t i = 0; i < 5; i++) {
		printf("Starting thread to calculate fibonacci(%d)\n", data[i].number);

		if (thrd_create(&threads[i], startFibonacci, &data[i]) != thrd_success) {
			printf("Failed to create thread");
		}
	}
    time_t startTime;
    time_t endTime;
    for(size_t i = 0; i < 5; i++){
        thrd_join(threads[i], NULL);
    }
    startTime = data[0].startTime;
    endTime = data[0].endTime;
    for(size_t i = 1; i < 5; i++){
        if(startTime > data[i].startTime){
            startTime = data[i].startTime;
        }
        if(endTime > data[i].endTime){
            endTime = data[i].endTime;
        }
    }
    printf("Execution time: %d", difftime(endTime, startTime));
}

int startFibonacci(void* np) {
	ThreadData* dataPtr = (ThreadData*)np;

	dataPtr->startTime = time(NULL);

	printf("Calculating fibonacci (%d)\n", dataPtr->number);
	printf("Fibonacci(%d) = %11d\n", dataPtr->number, fibonacci(dataPtr->number));

	dataPtr->endTime = time(NULL);

	printf("Calculation time = %f minutes\n\n", difftime(dataPtr->endTime, dataPtr->startTime) / 60);
	return thrd_success;
}

long long int fibonacci(int n) {
	if (n == 1 || n == 0) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}