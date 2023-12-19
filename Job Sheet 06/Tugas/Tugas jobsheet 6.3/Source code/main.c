/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>
#include <conio.h>
int main(){
	int n, i, j;

	printf("Ketikkan jumlah baris : ");
	scanf("%d", &n);

	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i; j++){
			printf("%d ", i*j);

		}
		printf("\n");
	}

	return 0;
}
