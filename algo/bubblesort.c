// C program to store time taken by bubble sort,
// insertion sort and selection sort
// for sorting exactly same arrays.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Swap utility
void swap(long int* a, long int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Bubble sort
void bubbleSort(long int a[], long int n)
{
         long int i = 0;
	for (i = 0; i < n - 1; i++) {
	       long int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}



// Driver code
int main()
{
	long int n = 10000;
	int it = 0;
       
       FILE *fp;
       fp = fopen("bubblesort.txt","a+"); 
        
	// Arrays to store time duration
	// of sorting algorithms
	double tim1 ;

	printf("A_size  Bubble\n");

	// Performs 10 iterations
	while (it < 10) {
		long int a[n];

		// generating n random numbers
	
		int i;
		for ( i = 0; i < n; i++) {
			long int no = rand() % n + 1;
			a[i] = no;
			
		}

		// using clock_t to store time
		clock_t start, end;

		// Bubble sort
		start = clock();
		bubbleSort(a, n);
		end = clock();

		tim1 = ((double)(end - start)/CLOCKS_PER_SEC);

		
		// type conversion to long int
		// for plotting graph with integer values
		printf("%li %lf\n",n,tim1);
             fprintf(fp,"%li %lf\n",n,tim1);
		// increases the size of array by 10000
		n += 10000;it++;
	}

	return 0;
}
/*A_size  Bubble
10000 0.320000
20000 1.100000
30000 2.520000
40000 4.520000
50000 7.120000
60000 10.310000
70000 14.090000
80000 18.450000
90000 23.580000
100000 28.990000
110000 35.380000*/















