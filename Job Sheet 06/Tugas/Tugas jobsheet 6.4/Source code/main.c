/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

int main(){
	int norek, menu;
	int saldo = 175000;
	int setoran, penarikan;
	char ulang;

	printf("=== Selamat datang di ATM bank KAMI ===\n\n");
	printf("Nomor rekening : ");
	scanf("%i", &norek);

	if(norek == 0123){
		printf("\nNo.Rek	  : 0123");
		printf("\nNama Akun   : Hatori\n\n");

		do{

		printf("\n1. Cek saldo\n");
		printf("2. Setoran\n");
		printf("3. Penarikan tunai\n");
		printf("4. Exit\n");
		printf("\nPilih menu : ");
		scanf("%i", &menu);
		switch(menu){
			case 1 :
				printf("\nSaldo anda : Rp. %i\n\n", saldo);
				printf("apakah anda ingin kembali ke menu utama (y/t) : ");
	 			scanf("%s", &ulang);
				break;

			case 2 :
				printf("\nKetikkan jumlah setoran	: Rp. ");
				scanf("%i", &setoran);
				printf("Saldo anda sebelumnya	: Rp. %i", saldo);
				saldo += setoran;
				printf("\nSaldo anda sekarang	: Rp. %i\n\n", saldo);
				printf("Apakah anda ingin kembali ke menu utama (y/t) : ");
	 			scanf("%s", &ulang);
				break;
			case 3 :
				printf("\nMinimal uang yg tersisa	   : Rp. 50000");
				printf("\nKetikkan nominal penarikan : Rp. ");
				scanf("%i", &penarikan);
				printf("\nSaldo anda sebelumnya	: Rp. %i", saldo);
				saldo -= penarikan;
				if(saldo < 50000){
					printf("\nMaaf penarikan tidak bisa dilakukan\n\n");
	 			}
				else{

				printf("\nSaldo anda sekarang	: Rp. %i\n\n", saldo);
				}
				printf("Apakah anda ingin kembali ke menu utama (y/t) : ");
	 			scanf("%s", &ulang);
				break;
			case 4 :
				printf("\nTERIMA KASIH TELAH DATANG\n\n");
				printf("Apakah anda ingin kembali ke menu utama (y/t) : ");
	 			scanf("%s", &ulang);
	 			break;
			default :
				printf("\nMaaf menu tidak tersedia\n\n");
				printf("Apakah anda ingin kembali ke menu utama (y/t) : ");
	 			scanf("%s", &ulang);
	 			break;
		}

	}while (ulang=='y');

	}
	else{
		printf("\nMaaf nomor rekening anda salah\n\n");
	}

	return 0;
}
