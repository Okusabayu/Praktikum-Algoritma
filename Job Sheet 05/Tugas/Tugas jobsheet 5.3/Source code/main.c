/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>

int main (){
	int rumus;

	printf("===PROGRAM RUMUS LENGKAP===\n\n");
	printf("1. Rumus Luas Permukaan Bola\n");
	printf("2. Rumus Luas Permukaan Kubus\n");
	printf("3. Rumus Luas Permukaan Balok\n");
	printf("4. Rumus Luas Permukaan Tabung\n\n");

	printf("Pilih rumus (1/2/3/4) : ");
	scanf("%d", &rumus);

	switch(rumus){
		case 1 :
			printf("Rumus Luas Permukaan Bola : 4 * phi * r^2\n");
			printf("phi = 3,14 atau 22/7");
			break;
		case 2 :
			printf("Rumus Luas Permukaan Kubus : 6 * r^2");
			break;
		case 3 :
			printf("Rumus Luas Permukaan Balok : 2 * (pl + pt + lt)");
			break;
		case 4 :
			printf("Rumus Luas Permukaan Tabung : 2 * phi * r * (r + t)\n");
			printf("phi = 3,14 atau 22/7");
			break;
		default :
			printf("Rumus tidak tersedia");
	}
	return 0;
}
