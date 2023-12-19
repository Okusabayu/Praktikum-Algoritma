/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>

int main(){
	// nilai kehadiran, nilai tugas, nilai uts, nilai uas, nilai akhir
	float nk, nt, nuts, nuas, na;

	printf("Ketikkan nilai kehadiran: ");
	scanf("%f", &nk);
	printf("Ketikkan nilai tugas	: ");
	scanf("%f", &nt);
	printf("Ketikkan nilai uts	: ");
	scanf("%f", &nuts);
	printf("Ketikkan nilai uas	: ");
	scanf("%f", &nuas);

	na = (0.2 * nk)+(0.2 * nt)+(0.25 * nuts)+(0.35 * nuas);

	printf("\nNilai akhir	: %.2f\n", na);

	if (na >= 0, na <=55){
		if (na >= 0, na <= 44){
			printf("Predikat	: E\n");
		}
		else {
			printf("Predikat	: D\n");
		}
		printf("\nMaaf, anda tidak lulus!\n");
	}
	else if (na >= 56, na <= 65){
		printf("Predikat	: C\n");
		printf("\nAnda lulus, tingkatkan lagi untuk kedepannya!\n");
	}
	else if (na >= 66, na <= 85){
		if (na >= 66, na <= 75){
			printf("Predikat	: B-\n");
		}
		else if (na >= 76, na <= 80){
			printf("Predikat	: B\n");
		}
		else {
			printf("Predikat	: B+\n");
		}
		printf("\nAnda lulus dengan baik, tingkatkan terus belajarnya!\n");
	}
	else if (na >= 86, na <= 100){
		if (na >=86, na <= 90){
			printf("Predikat	: A-\n");
		}
		else {
			printf("Predikat	: A+\n");
		}
		printf("\nSelamat! anda lulus dengan nilai yang sangat memuaskan!\n");
	}
	else {
		printf("\nNilai anda tidak mungkin ini\n");
	}
	return 0;
}
