#include <stdio.h>

int main(void) {
    int n, sum, i, i_copy;
	int fact_arr[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
	printf("Enter the last Number: ");
	scanf("%i", &n);
	for(int i = 1; i <= n; i++){
		sum = 0;
		i_copy = i;
		while(i_copy){
			sum += fact_arr[i_copy % 10];
			i_copy /= 10;
		}
		if(sum == i)printf("%i\n", i);
	}
	return 0;
}
