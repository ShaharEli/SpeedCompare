

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
# include<time.h>



int main()

{
    const int MAX = 100000000;
    clock_t start, end;
    start = clock();

    printf("Starting c test...\n");
    int points[10];
    int p=0;
    for (int i = 0; i < MAX; i+=(MAX/10))
    {
        points[p]= i ;
        ++p;
    }
    for (int k = 0; k < MAX; ++k)
    {
        for(int j = 0; j < 10 ; ++j){
            if (points[j]==k){
                printf("%d  percents\n",j*10);
            }

        }
    }
    end = clock();
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("--- done in: %f seconds ---", duration);
  
    return 0;

}