/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

int main(){
	int i;

    printf("Bilangan genap\n");
	for(int i = 0; i <= 50; i+=2){
		printf("%d ", i);
	}

	printf("\n\nBilangan ganjil\n");
	for (int i = 1; i <= 50; i+=2){
		printf("%d ", i);
	}

	return 0;
}
