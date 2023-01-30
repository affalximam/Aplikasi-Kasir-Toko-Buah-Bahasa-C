#include <stdio.h>
#include <stdlib.h>

void clear(){
    // Windows
    system("cls");

    // Linux
    // system("clear");
}

int main(){

    int pilih;
    float total, bayar, kembali;
    char cek;

    float buah1 = 0, jumlah1;
    float buah2 = 0, jumlah2;
    float buah3 = 0, jumlah3;
    float buah4 = 0, jumlah4;
    float buah5 = 0, jumlah5;
    float buah6 = 0, jumlah6;
    float buah7 = 0, jumlah7;
    float buah8 = 0, jumlah8;
    float buah9 = 0, jumlah9;

    char *  daftar_buah[10];
            daftar_buah[1] = "Jeruk";
            daftar_buah[2] = "Apel";
            daftar_buah[3] = "Jambu";
            daftar_buah[4] = "Pisang";
            daftar_buah[5] = "Rambutan";
            daftar_buah[6] = "Nanas";
            daftar_buah[7] = "Melon";
            daftar_buah[8] = "Pir";
            daftar_buah[9] = "Anggur";
    
    top:
    clear();
    printf("\n-------------------------\n");
    printf("Program kasir Toko Buah\n");
    printf("By : AFFALXIMAM\n");
    printf("-------------------------\n\n");

    printf("Daftar Buah Buahan : \n");
    for(int i = 1; i <= 9; i++){
        printf("%d. %s \n", i, daftar_buah[i]);
    }

    printf("Checkout = 0\n");
    
    do{
        printf("\nMasukan Buah yang dipilih : ");
        scanf("%i", &pilih);

        if(pilih == 1){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah1);
            buah1 = +10 * jumlah1;
            printf("    Harga Buah              : Rp10.000 x %.0f = Rp%.3f \n", jumlah1, buah1);
        }

        else if(pilih == 2){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah2);
            buah2 = +25 * jumlah2;
            printf("    Harga Buah              : Rp25.000 x %.0f = Rp%.3f \n", jumlah2, buah2);
        }

        else if(pilih == 3){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah3);
            buah3 = +5 * jumlah3;
            printf("    Harga Buah              : Rp5.000 x %.0f = Rp%.3f \n", jumlah3, buah3);
        }

        else if(pilih == 4){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah4);
            buah4 = +15 * jumlah4;
            printf("    Harga Buah              : Rp15.000 x %.0f = Rp%.3f \n", jumlah4, buah4);
        }
        
        else if(pilih == 5){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah5);
            buah5 = +12 * jumlah5;
            printf("    Harga Buah              : Rp12.000 x %.0f = Rp%.3f \n", jumlah5, buah5);
        }

        else if(pilih == 6){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah6);
            buah6 = +30 * jumlah6;
            printf("    Harga Buah              : Rp30.000 x %.0f = Rp%.3f \n", jumlah6, buah6);
        }

        else if(pilih == 7){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah7);
            buah7 = +20 * jumlah7;
            printf("    Harga Buah              : Rp20.000 x %.0f = Rp%.3f \n", jumlah7, buah7);
        }

        else if(pilih == 8){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah8);
            buah8 = +10 * jumlah8;
            printf("    Harga Buah              : Rp10.000 x %.0f = Rp%.3f \n", jumlah8, buah8);
        }

        else if(pilih == 9){
            printf("    Buah yang dipilih       : %s \n", daftar_buah[pilih]);
            printf("    Masukan Jumlah Barang   : ");
            scanf("%f", &jumlah9);
            buah9 = +25 * jumlah9;
            printf("    Harga Buah              : Rp25.000 x %.0f = Rp%.3f \n", jumlah9, buah9);
        }

        else if(pilih == 0){
            continue;
        }
    }
    while (pilih != 0);
    total = buah1+buah2+buah3+buah4+buah5+buah6+buah7+buah8+buah9;
    printf("\nCHECKOUT");
    printf("\nTotal Harga Barang adalah       : Rp%.3f \n", total);

    bayar:
    printf("Masukan Nominal Pembayaran      : Rp");
    scanf(" %f", &bayar);

    if(bayar > total){
        kembali = bayar - total;
        printf("Uang kembalian                  : Rp%.3f\n\n", kembali);
    }
    else if(bayar == total){
        printf("Uang kembalian                  : Uang pas\n\n");
    }
    else if(bayar < total){
        printf("Uang Kurang!\n");
        goto bayar;
    }
    else{
        printf("Input salah!\n");
        goto bayar;
    }
    

    cek:
    printf("Apakah ingin pesan lagi ? (y/t) : ");
    scanf(" %c", &cek);
    if (cek == 'y') {
        buah1 = 0, jumlah1 = 0;
        buah2 = 0, jumlah2 = 0;
        buah3 = 0, jumlah3 = 0;
        buah4 = 0, jumlah4 = 0;
        buah5 = 0, jumlah5 = 0;
        buah6 = 0, jumlah6 = 0;
        buah7 = 0, jumlah7 = 0;
        buah8 = 0, jumlah8 = 0;
        buah9 = 0, jumlah9 = 0;
        goto top;
    }
    else if (cek == 't')
    {
        printf("Program selesai");
    }
    else{
        goto cek;
    }
    
    
}