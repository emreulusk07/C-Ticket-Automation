/*
EMRE ULUISIK
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

    int a, b;
    char sehirler[5][10]={" ","ISTANBUL","ESKISEHIR","ANKARA","KONYA"};

    int t, gun;
    char aylar[14][8]={" ","OCAK","SUBAT","MART","NISAN","MAYIS","HAZIRAN","TEMMUZ","AGUSTOS","EYLUL","EKIM","KASIM","ARALIK"};

    char sehirlerr[11][10]={" ","ISTANBUL","ESKISEHIR","ANKARA","KONYA","TRABZON","MARDIN","IZMIR","CANAKKALE","ANTALYA","BURSA"};

    char dizi[9][50]={" ","BABAM ve OGLUM","TITANIC","MUSLUM","SHERLOCK HOLMES","FAST and FURIOUS","INCEPTION","SAW (+18)","ICE AGE"};

    double imdb[9] = {0,4.5, 4.0, 3.5, 3.5, 3.5, 5.0, 4.0, 4.5};
    int sure[9] = {0,108,210,132,128,107,148,104,81};

    char tur[9][100] = {" ","Dramatik","Ask","Dramatik","Macera","Aksiyon","Gerilim","Korku","Animasyon"};

    char b_oyuncular[9][150] = {" ","Fikret Kuskan, Humeyra, Ozge Ozberk","Leonardo DiCaprioi Kate Winslet, Billy Zane","Timucin Esen, Zerrin Tekindor, Ayca Bingol",
                           "Kate Winslet, Billy Zane","Paul Walker, Vin Diesel, Michelle Rodriguez","Leonardo DiCaprio, Marion Cotillard, Ellen Page",
                           "Leigh Whannell, Cary Elwes, Danny Glover","Ray Romano, John Leguizamo, Denis Leary"};

    char yonetmen[9][50] = {" ","Cagan Irmak","James Cameron","Ketche ve Can Ulkay","Guy Ritchie","Rob Cohen","Christopher Nolan","James Wan","Chris Wedge ve Carlos Saldanha"};

    int kisi_sayisi, i, film_sec, film_boyut, film_saat;
    int isim, soyisim, gmail, TcNo;


void BiletAlma();
void DigerIslem();
void CikisIslemi();
void SinemaBileti();
void SinemaFisiBastirma();
void FilmBoyutSaat();
void SinemaBileti_devami();
void UlasimBileti();
void YHTbileti();
void Ucakbileti();
void BiletAyirtmaAlma(int kisi_yasi);
void BiletFiyati(int tren_koltugu);
void Ucakbileti_devami();
void UcakBiletiFisi();
void TrenBiletiFisi();

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


int main()
{
    int islem;
      printf("\n\t\t\t\t\t     ~ ANA MENU ~");
      printf("\n\t\t\t\t\t     ------------\n\n");
      printf("---------------------------\t\t---------------------\t\t----------------------\n");
      printf("| 1- BILET ALMA ISLEMLERI |\t\t");
      printf("| 2- DIGER ISLEMLER |\t\t");
      printf("| 3- CIKIS ISLEMLERI |\n");
      printf("---------------------------\t\t---------------------\t\t----------------------\n\n");
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
      printf("Gerceklestirmek istediginiz islemin numarasini giriniz. ");
      scanf("%d", &islem);
      printf("\n");
      switch(islem){

            case 1: BiletAlma();
                                 break;
            case 2: DigerIslem();
                                 break;
            case 3: exit(0);
                             break;

            default: printf("\n!! Isleminizi gerceklestiremediniz. Lutfen 1 ile 3 arasinda bir sayi giriniz: ");
                     scanf("%d", &islem);
                     switch(islem){

                               case 1: BiletAlma();
                                                    break;
                               case 2: DigerIslem();
                                                     break;
                               case 3: exit(0);
                                                break;
               if(islem<=0 || islem>3){
                system("CLS");
                main();
               }
       }
      }


    return 0;
}



void BiletAlma()
{
      int islemsec;
      printf("\n  1 --> SINEMA BILETI\n");
      printf("  2 --> ULASIM BILETI\n");
      printf("  3 --> ANA MENUYE DON\n\n");
      printf("Gerceklestirmek istediginiz islemin numarasini giriniz. ");
      scanf("%d", &islemsec);
      switch(islemsec){

            case 1: SinemaBileti();
                                    break;
            case 2: UlasimBileti();
                                    break;
            case 3: main();
                            break;

            default: printf("\nIsleminizi gerceklestiremediniz.\nLutfen 1 ile 3 arasinda bir sayi giriniz: ");
                     scanf("%d", &islemsec);

              if(islemsec<=0 || islemsec>3){
                system("CLS");
                main();
              }
      }


}



void DigerIslem()
{
      int secim;
      printf("  1) Biletimi iptal etmek istiyorum.\n");
      printf("  2) Musteri hizmetleriyle gorusmek istiyorum.\n");
      printf("Gerceklesirmek istetiginiz islemin numarasinigiriniz. ");
      scanf("%d", &secim);
      switch(secim){

            //case 1: BiletIptali();
            //                       break;
            //case 2: MusteriHizmet();
            //                         break;

            default: printf("\nIsleminizi gerceklestiremediniz.\nLutfen 1 ile 3 arasinda bir sayi giriniz.\n");

            if(secim<=0 && secim>3){
                system("CLS");
                main();
            }
      }
}


void SinemaBileti()
{
      system("CLS");



      int k;
      printf("\n\t\t\t < VIZYONDAKI FILMLER >");


    for(k=1;k<=8;k++){
         printf("\n\n# %d.Film: %s #\n\nIMDB puani: %.1f\nFilm suresi: %d DK\nFilm Turu: %s\nFilm oyunculari: %s\nYonetmen: %s", k, dizi[k], imdb[k], sure[k], tur[k], b_oyuncular[k], yonetmen[k]);
        printf("\n------------------------------------------------------");
    }


     printf("\n\nIzlemek istediginiz filmin numarasini giriniz: ");
     scanf("%d",&film_sec);

        if(film_sec<0 || film_sec>8){

            printf("! Lutfen 1 ile 8 arasinda bir numara giriniz:");
            scanf("%d", &film_sec);
system("CLS");
               if(film_sec<0 || film_sec>8)
                SinemaBileti();
        }

        else{
system("CLS");
            printf("Isleminiz gerceklesmistir.");
            printf("\n\n# %d.Film: %s #\n\nIMDB puani: %.1f\nFilm suresi: %d DK\nFilm Turu: %s\nFilm oyunculari: %s\nYonetmen: %s",film_sec, dizi[film_sec], imdb[film_sec], sure[film_sec], tur[film_sec], b_oyuncular[film_sec], yonetmen[film_sec]);
        }




      int dizi2[kisi_sayisi][1];
      int kisi_yasi;
      int w=0;
      printf("\n\nAlmak istediginiz bilet sayisini giriniz: ");
      scanf("%d", &kisi_sayisi);

      for(w=0;w<kisi_sayisi;w++){
        printf("\n%d. kisinin yasini giriniz: ", w+1);
        scanf("%d", &kisi_yasi);

          if(film_sec== 7 && kisi_yasi<18)
         {
           printf("! Sectiginiz filmi 18 yasindan kucukler izleyememektedir. Lutfen tekrar secim yapiniz.");
           delay(2200);
           SinemaBileti();
         }

      }

FilmBoyutSaat();

}


void FilmBoyutSaat()
{

system("CLS");



       printf("\nTum filmlerimiz 2D VE 3D boyutlu olarak seanslar icermektedir.\nLutfen boyut secimi icin 2 veya 3e basiniz.");
       scanf("%d", &film_boyut);

         if(film_boyut==2){
            printf("\n\n# 2D Filmlerimizin Seans Saatleri #\n");
            printf("1 --> 13.00\n2 --> 15.30\n3 --> 18.00\n4 --> 20.30\n");
            printf("Lutfen secmek istediginiz saatin onundeki numarayi tuslayiniz.");
            scanf("%d", &film_saat);
            switch(film_saat){

             case 1: printf("\nSectiginiz Film Saati: 08.00");
                                                               break;
             case 2: printf("\nSectiginiz Film Saati: 11.30");
                                                               break;
             case 3: printf("\nSectiginiz Film Saati: 15.00");
                                                               break;
             case 4: printf("\nSectiginiz Film Saati: 18.30");
                                                               break;

             default:  printf("\nYanlis sayi tusladiniz. Lutfen 1 ile 4 arasinda bir sayi tuslayiniz: ");
                       scanf("%d", &film_saat);
                       switch(film_saat){

                             case 1: printf("\nSectiginiz Film Saati: 08.00");
                                                                               break;
                             case 2: printf("\nSectiginiz Film Saati: 11.30");
                                                                               break;
                             case 3: printf("\nSectiginiz Film Saati: 15.00");
                                                                               break;
                             case 4: printf("\nSectiginiz Film Saati: 18.30");
                                                                               break;

                             default: FilmBoyutSaat();

                             }
             }
          }

         else if(film_boyut==3){
            printf("\n\n# 3D Filmlerimizin Seans Saatleri #\n");
            printf("1 --> 13.30\n2 --> 16.00\n3 --> 18.30\n4 --> 21.00\n");
            printf("Lutfen secmek istediginiz saatin onundeki numarayi tuslayiniz.");
            scanf("%d", &film_saat);
            switch(film_saat){

             case 1: printf("\nSectiginiz Film Saati: 08.00");
                                                               break;
             case 2: printf("\nSectiginiz Film Saati: 11.30");
                                                               break;
             case 3: printf("\nSectiginiz Film Saati: 15.00");
                                                               break;
             case 4: printf("\nSectiginiz Film Saati: 18.30");
                                                               break;

             default:  printf("\nYanlis sayi tusladiniz. Lutfen 1 ile 4 arasinda bir sayi tuslayiniz: ");
                       scanf("%d", &film_saat);
                       switch(film_saat){

                             case 1: printf("\nSectiginiz Film Saati: 08.00");
                                                                               break;
                             case 2: printf("\nSectiginiz Film Saati: 11.30");
                                                                               break;
                             case 3: printf("\nSectiginiz Film Saati: 15.00");
                                                                               break;
                             case 4: printf("\nSectiginiz Film Saati: 18.30");
                                                                               break;

                             default: FilmBoyutSaat();

                             }
             }
          }

          else{
              if(film_boyut<2 || film_boyut>3){
                printf("\nYanlis sayi tusladiginiz icin saat secimi yapamadiniz.\nLutfen tekrar deneyiniz.");
                FilmBoyutSaat();
              }

          }

SinemaBileti_devami();
}

void SinemaBileti_devami()
{
system("CLS");

       int i, j, t=0,k;
       printf("\n~~~~~~~~~~~~ KOLTUK SECIMI ~~~~~~~~~~~~\n");
       printf("Oturmak istediginiz koltugu seciniz.\n");
       int koltuk_sec[8][12];

       printf("\n\t> SINEMA SALONU <\n\n");
       for(k=0;k<kisi_sayisi;k++)
       {
        for(i=0;i<8;i++){
         for(j=0;j<12;j++)
         {
           {
             koltuk_sec[i][j]=t+1;
             t++;
           }

         }
      }



       for(i=0;i<8;i++){
         for(j=0;j<12;j++)
         {
           printf("[%d]\t",koltuk_sec[i][j]);
           if(koltuk_sec[i][j]%8==0)
            printf("\n\n");
         }
      }
      }




      int secilen_num, sifir_bir;
      printf("\nOturmak istediginiz koltuk numarasini kendiniz girmek istiyorsaniz 0'a basin.");
      printf("\nKoltuk numarasinin rastgele verilmesini istiyorsaniz 1'e basin.");
      scanf("%d", &sifir_bir);

    if(sifir_bir==0){
            printf("\nOturmak istediginiz koltugun numarasini tuslayiniz: ");
            scanf("%d", &secilen_num);
              if(secilen_num<=0 && secilen_num>96){
                printf("Yanlis tusladiniz. Lutfen tekrar deneyin.(1-96)");
              }
              else{
                printf("\nKoltuk secme isleminiz gerceklesmistir. %d. koltukta oturmaktasiniz.", secilen_num);
              }
}

     else if(sifir_bir==1){
            printf("Sizin icin sectigimiz koltuk numarasi: ");
            srand(time(NULL)%96);
            printf("%d", time(NULL)%96);
    }

    else
           SinemaBileti_devami();



        char isim[15], soyisim[15], gmail[25], sifre[10];
        int biletalma, TcNo, bas;
        int kart_tarihi, KartNo;
        printf("\n\nKoltuk seciminizi gerceklestirdiniz. Lutfen bekleyin..");
delay(5000);
system("CLS");

        printf("\n\t\t< BILET SATIN ALMA >\n\n");
        printf("Bilet satin alma islemlerine hosgeldiniz.");
        //scanf("%d", &biletalma);
        printf("\n");

                        for(i=0;i<kisi_sayisi;i++){

                            printf("\n\t-ODEME ISLEMLERI-\n");
                            printf("\nKart sahibinin ismi: ");
                            scanf("%s", isim);
                            printf("\nKart sahibinin soyismi: ");
                            scanf("%s", soyisim);
                            printf("\nKart sahibinin TC kimlik numarasi: ");
                            scanf("%d", &TcNo);
                            printf("\nKart numaraniz: ");
                            scanf("%d", &KartNo);
                            printf("\nKartinizin son kullanma tarihini giriniz: ");
                            scanf("%d", &kart_tarihi);
                            printf("\nSifreniz: ");
                            scanf("%s", sifre);

                            printf("\n\nBilet aliminiz gerceklesmistir.\nFisinizi gormek icin 1'e , Ana menuye donmek icin 0'a basiniz.\n");
                            scanf("%d", &bas);
                            if(bas==1)
                                SinemaFisiBastirma(isim,soyisim,TcNo);
                            else if(bas==0)
                                main();
                            else
                                printf("-----------------------------------------");
}
}

void SinemaFisiBastirma(char isim[], char soyisim[], int TcNo)
{

system("CLS");

        printf("\n\t***********************************************************");
        printf("\n\t\t\t~~ SINEMA BILETI FISI ~~");
        printf("\n\n\n\t# %d.Film: %s #\n\n\tIMDB puani: %.1f\n\tFilm suresi: %d DK\n\tFilm Turu: %s\n\tFilm oyunculari: %s\n\tYonetmen: %s" ,film_sec, dizi[film_sec], imdb[film_sec], sure[film_sec], tur[film_sec], b_oyuncular[film_sec], yonetmen[film_sec]);

        printf("\n\tFilm Boyutu: %dD", film_boyut);

        printf("\n\n\tIsim: %s", isim);
        printf("\n\tSoyisim: %s", soyisim);
        printf("\n\tTC No: %d", TcNo);

       printf("\n\t*************************************************************\n\n\n\n\n\n");
}

void UlasimBileti()
{

system("CLS");

      printf("\n\t\t\t~~ ULASIM BILET ALMA ISLEMLERINE HOSGELDINIZ ~~\n");
      printf("\t\t\t----------------------------------------\n\n");

      int secim;
      printf("# 1-) YUKSEK HIZLI TREN BILETI ALIMI #\t\t");
      printf("# 2-) UCAK BILETI ALIMI #\t\t\n\n");
      printf("Bilet satin almak istediginiz ulasim aracinin onundeki numarayi tuslayiniz. ");
      scanf("%d", &secim);
      printf("\n\n");
          if(secim==1){
            printf("\t\t  <YUKSEK HIZLI TREN BILETI>\n\n");
            YHTbileti();
          }
          else if(secim==2){
            printf("\t\t  <UCAK BILETI>\n");
            Ucakbileti();
          }
          else{
            main();
          }

}

void YHTbileti()
{

system("CLS");



       printf("\n~~ YUKSEK HIZLI TRENIN SEFER YAPTIGI SEHIRLER ~~\n");
       printf("------------------------------------------------\n");
       printf("\n\n1 *ISTANBUL*\t 2 *ESKISEHIR*\t 3 *ANKARA*\t 4 *KONYA*\n\n");
       printf("Kalkis yapacaginiz sehrin onundeki numarayi tuslayiniz: ");
       scanf("%d", &a);
       printf("Gitmek istediginiz sehrin onundeki numarayi tuslayiniz: ");
       scanf("%d", &b);
         if((a<0 || b<0)||(a>4 || b>4))
            YHTbileti();

         if(a==b){
            printf("Ilk girdiginiz sayi ile ikinci girdiginiz sayinin ayni olmamasi gerekmektedir.");
            printf("\nLutfen sayilari tekrar giriniz.\n\n");
            YHTbileti();
         }

        printf("\n   | Kalkis Yapilacak Sehir: *%s* |\n   | Gidis Yapilacak Sehir: *%s* |", sehirler[a], sehirler[b]);





         if(a==1 && b==2)
            printf("\n\nYolculugunuz 1,5 saat surecektir.\n");
         else if(a==1 && b==3)
            printf("\n\nYolculugunuz 3,5 saat surecektir.\n");
         else if(a==1 && b==4)
            printf("\n\nYolculugnuz 4 saat 10dk surecektir.\n");
         else if(a==2 && b==1)
            printf("\n\nYolculugunuz 1,5 saat surecektir.\n");
         else if(a==2 && b==3)
            printf("\n\nYolculugunuz 2 saat surecektir.\n");
         else if(a==2 && b==4)
            printf("\n\nYolculugunuz 2 saat 40dk surecektir.\n");
         else if(a==3 && b==1)
            printf("\n\nYolculugunuz 3,5 saat surecektir.\n");
         else if(a==3 && b==2)
            printf("\n\nYolculugunuz 2 saat surecektir.\n");
         else if(a==3 && b==4)
            printf("\n\nYolculugunuz 40dk surecektir.\n");
         else if(a==4 && b==1)
            printf("\n\nYolculugnuz 4 saat 10dk surecektir.\n");
         else if(a==4 && b==2)
            printf("\n\nYolculugunuz 2 saat 40dk surecektir.\n");
         else if(a==4 && b==3)
            printf("\n\nYolculugunuz 40dk surecektir.\n");

      printf("Bekleyiniz..");


delay(4000);
system("CLS");



      printf("\nBilet almak istediginiz ayi takvimdeki sirasina gore tuslayiniz (1 ile 12 arasinda):  ");
      scanf("%d", &t);
      printf("\n\t\t< %s >", aylar[t]);

         if(t<=0 || t>12){
            YHTbileti();
         }
      printf("\n\n");


      int i, j, k=0;
      int tarih[7][6];
        for(i=1;i<=6;i++){
            for(j=1;j<=5;j++){
               tarih[i][j]=k+1;
               k++;
            }
        }

            for(i=1;i<=6;i++){
                for(j=1;j<=5;j++){
                    printf("%d\t", tarih[i][j]);
                }
                printf("\n\n");
            }


        printf("Bilet almak istediginiz gunu yaziniz: ");
        scanf("%d", &gun);
          if(gun<=0){
            printf("Yanlis tusladiniz. Lutfen takvimdeki sayilardan birini tuslayiniz: ");
            scanf("%d", &gun);
          }
          else if(gun>30){
            printf("Yanlis tusladiniz. Lutfen takvimdeki sayilardan birini tuslayiniz: ");
            scanf("%d", &gun);
          }
          else{
            printf("Gidis Tarihiniz: %d %s 2019", gun, aylar[t]);
          }



system("CLS");


        printf("\n\t\t~~ TREN SEFERLERI ~~\n");
        int tren_saat;
        printf("\n%d %s 2019 Tren Seferleri Saatlerimiz:\n\n", gun, aylar[t]);
        printf("  1 --> 08.00\n  2 --> 11.30\n  3 --> 15.00\n  4 --> 18.30\n");
        printf("\nLutfen secmek istediginiz saatin onundeki numarayi tuslayiniz: ");
        scanf("%d", &tren_saat);
        switch(tren_saat){

             case 1: printf("\nSectiginiz Sefer Saati: 08.00");
                                                                break;
             case 2: printf("\nSectiginiz Sefer Saati: 11.30");
                                                                break;
             case 3: printf("\nSectiginiz Sefer Saati: 15.00");
                                                                break;
             case 4: printf("\nSectiginiz Sefer Saati: 18.30");
                                                                break;

             default:  printf("\nYanlis sayi tusladiniz. Lutfen 1 ile 4 arasinda bir sayi tuslayiniz: ");
                       scanf("%d", &tren_saat);
                       switch(tren_saat){

                             case 1: printf("\nSectiginiz Sefer Saati: 08.00");
                                                                                break;
                             case 2: printf("\nSectiginiz Sefer Saati: 11.30");
                                                                                break;
                             case 3: printf("\nSectiginiz Sefer Saati: 15.00");
                                                                                break;
                             case 4: printf("\nSectiginiz Sefer Saati: 18.30");
                                                                                break;

                             }
         }



delay(3000);
system("CLS");


      int  kisi_yasi;
      int w;
      printf("\nAlmak istediginiz bilet sayisini giriniz: ");
      scanf("%d", &kisi_sayisi);
    //int dizi2[kisi_sayisi][kisi_yasi];
      int dizi2[kisi_sayisi][1];

      for(w=0;w<kisi_sayisi;w++){
        printf("\n%d. kisinin yasini giriniz: ", w+1);
        scanf("%d", &kisi_yasi);

          if(kisi_yasi>0 && kisi_yasi<18){
            printf("(18 yasindan kucukler icin bilet fiyatlarimiz %20 indirimlidir.)\n");
          }
          else{
            printf("(Yetiskinler icin bilet fiyatimiz sabittir.)\n");

          }
      }

       printf("\nKoltuk secimi icin bekleyiniz..");


delay(3000);
system("CLS");


      int q, z, x, y=0;
      int Koltuk_Sec[3][6];
      printf("\n~~~~~~~~~~~~ KOLTUK SECIMI ~~~~~~~~~~~~\n\n");
    for(z=0;z<kisi_sayisi;z++){

      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            Koltuk_Sec[q][x] = y+1;
            y++;

        }
      }
      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            printf("|%d|\t", Koltuk_Sec[q][x]);
        if(Koltuk_Sec[q][x]%9==0)
            printf("\n");
        }
      }
      printf("----------------------------- KORIDOR -----------------------------\n");



      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            Koltuk_Sec[q][x] = y+1;
            y++;

        }
      }
      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            printf("|%d|\t", Koltuk_Sec[q][x]);
        if(Koltuk_Sec[q][x]%27==0)
            printf("\n");
        }
      }
    }


      int tren_koltugu;

      printf("\n\nKoltuklarimiz 28.koltuktan itibaren yemek ikramlidir.\nYemekli koltuklarimizda fiyatta degisiklik bulunmaktadir.\n\n");
      printf("Oturmak istediginiz koltugun numarasini giriniz: ");
      scanf("%d", &tren_koltugu);


BiletAyirtmaAlma(kisi_yasi);

}



void BiletAyirtmaAlma(int kisi_yasi)
{

system("CLS");


        char YolcuBilgi1[kisi_sayisi][100];
        int YolcuBilgi2[kisi_sayisi][11];
        int ayirtma_alma, i, sifre;
        printf("\nKoltuk seciminizi gerceklestirdiniz.");
        printf("\n\n\n\t\t< 1- BILET AYIRTMA >\t\t< 2- BILET SATIN ALMA >\n\n");
        printf("Bilet ayirtmak veya satin almak icin basliklarin onundeki numaralari tuslayiniz: ");
        scanf("%d", &ayirtma_alma);
        printf("\n\n");

           if(ayirtma_alma==1){
system("CLS");
              printf("\n\t~~~~~BILET AYIRTMA~~~~~\n");
              printf("Bilet ayirtma islemleri icin yolcu bilgileri gerekmektedir.\n\n  + Yolcu Bilgileri +\n\n");
                  for(i=0;i<kisi_sayisi;i++){
                      printf("%d.kisinin yolcu bilgileri\n\n", i+1);
                      printf("Isminiz: ");
                      scanf("%s", YolcuBilgi1[i]);
                      printf("Soyisminiz: ");
                      scanf("%s", YolcuBilgi1[i]);
                      printf("Gmail adresiniz: ");
                      scanf("%s", YolcuBilgi1[i]);
                      printf("\n");
                      printf("\n!! UYARI !! : Eger kalkis saatinin 24 saat oncesine kadar bilet saattin alma\nisleminizi gerceklestirmezseniz, biletiniz iptal olacaktir..");
                  }
           }

           else if(ayirtma_alma==2){
system("CLS");
               printf("\n\t~~~~~BILET SATIN ALMA~~~~~\n");
               printf("Bilet satin alma islemleri icin yolcu bilgileri gerekmektedir.\n\n  + Yolcu Bilgileri +\n\n");
               for(i=0;i<kisi_sayisi;i++){
                      printf("%d.kisinin yolcu bilgileri\n\n", i+1);
                      printf("Isminiz: ");
                      scanf("%s", YolcuBilgi1[i]);
                      printf("Soyisminiz: ");
                      scanf("%s", YolcuBilgi1[i]);
                      printf("Gmail adresiniz: ");
                      scanf("%s", YolcuBilgi1[i]);
                      printf("TC kimlik numaraniz: ");
                      scanf("%d", YolcuBilgi2[i]);
                        if(strlen(YolcuBilgi2[i])!=11){
                            printf("Lutfen TC kimliginizi 11 haneli olarak giriniz.");
                            printf("TC kimlik numaraniz: ");
                            scanf("%d", &TcNo);
                            printf("\n\n");
                            printf("\t-ODEME ISLEMLERI-\n");

                            printf("Kart sahibinin ismi: ");
                            scanf("%d", YolcuBilgi1[i]);
                            printf("Kart sahibinin soyismi: ");
                            scanf("%d", YolcuBilgi1[i]);
                            printf("Kart numaraniz: ");
                            scanf("%d", YolcuBilgi2[i]);
                            printf("Sifreniz: ");
                            scanf("%d", &sifre);
                        }
                        else{
                      printf("\n\n");
                      printf("\t-ODEME ISLEMLERI-\n");
                      printf("Kart sahibinin ismi: ");
                      scanf("%s", isim);
                      printf("Kart sahibinin soyismi: ");
                      scanf("%s", soyisim);
                      printf("Kart numaraniz: ");
                      scanf("%d", YolcuBilgi2[i]);
                      printf("Sifreniz: ");
                      scanf("%d", &sifre);

                      }
              }
           }

           else
                BiletAyirtmaAlma(kisi_yasi);


TrenBiletiFisi(isim,soyisim,TcNo);
}


void TrenBiletiFisi(char isim[], char soyisim[], int TcNo)
{

system("CLS");

        printf("\n\t***********************************************************");
        printf("\n\t\t\t~~ TREN BILETI FISI ~~");
        printf("\n\n\t   | Kalkis Yapilacak Sehir: *%s* |\n   | Gidis Yapilacak Sehir: *%s* |", sehirler[a], sehirler[b]);

        printf("\n\tGidis Tarihiniz: %d %s 2019", gun, aylar[t]);

        printf("\n\n\tIsim: %s", isim);
        printf("\n\tSoyisim: %s", soyisim);
        printf("\n\tTC No: %d", TcNo);

       printf("\n\t*************************************************************\n\n\n\n\n\n");
}


void Ucakbileti(int tren_koltugu)
{

system("CLS");


       printf("\n\t= UCAGIN SEFER YAPTIGI SEHIRLER =\n");
       printf("\t---------------------------------");
       printf("\n\n1 *ISTANBUL*\t 2 *ESKISEHIR*\t 3 *ANKARA*\t 4 *KONYA*\t 5 *TRABZON*\n");
       printf("6 *MARDIN*\t 7 *IZMIR*\t 8 *CANAKKALE*\t 9 *ANTALYA*\t 10 *BURSA*\n\n");
       printf("Kalkis yapacaginiz sehrin onundeki numarayi tuslayiniz: ");
       scanf("%d", &a);
       printf("Gitmek istediginiz sehrin onundeki numarayi tuslayiniz: ");
       scanf("%d", &b);
         if((a<0 || b<0)||(a>10 || b>10))
            Ucakbileti(tren_koltugu);

         if(a==b){
            printf("Ilk girdiginiz sayi ile ikinci girdiginiz sayinin ayni olmamasi gerekmektedir.");
            printf("\nLutfen sayilari tekrar giriniz.\n\n");
            Ucakbileti(tren_koltugu);
         }
         else{
            printf("\n   | Kalkis Yapilacak Sehir: *%s* |\n   | Gidis Yapilacak Sehir: *%s* |", sehirlerr[a], sehirlerr[b]);
         }

       printf("\n\n\tBekleyin..");


delay(3000);
system("CLS");


      int t;
      char aylar[14][8]={" ","OCAK","SUBAT","MART","NISAN","MAYIS","HAZIRAN","TEMMUZ","AGUSTOS","EYLUL","EKIM","KASIM","ARALIK"};
      printf("\n\nBilet almak istediginiz ayi takvimdeki sirasina gore tuslayiniz (1 ile 12 arasinda):  ");
      scanf("%d", &t);
      printf("\n\t\t< %s >", aylar[t]);

         if(t<=0 || t>12){
            printf("\nYanlis tusladiniz. Lutfen 1 ile 12 arasinda bir sayi giriniz: ");
            scanf("%d", &t);
            printf("\n\t\t< %s >", aylar[t]);
              if(t<=0 || t>12)
                Ucakbileti(tren_koltugu);
         }
      printf("\n\n");



      int i, j, k=0;
      int tarih[7][6];
        for(i=1;i<=6;i++){
            for(j=1;j<=5;j++){
               tarih[i][j]=k+1;
               k++;
            }
        }

            for(i=1;i<=6;i++){
                for(j=1;j<=5;j++){
                    printf("%d\t", tarih[i][j]);
                }
                printf("\n\n");
            }



        int gun;
        printf("Bilet almak istediginiz gunu yaziniz: ");
        scanf("%d", &gun);

          if(gun<=0){
            printf("Yanlis tusladiniz. Lutfen takvimdeki sayilardan birini tuslayiniz: ");
            scanf("%d", &gun);
          }

          else if(gun>30){
            printf("Yanlis tusladiniz. Lutfen takvimdeki sayilardan birini tuslayiniz: ");
            scanf("%d", &gun);
          }

          else{
            printf("Gidis Tarihiniz: %d %s 2019", gun, aylar[t]);
          }


system("CLS");


          printf("\n\t\t~~ UCAK SEFERLERI ~~\n");
        int tren_saat;
        printf("\n%d %s 2019 Ucak Seferleri Saatlerimiz:\n\n", gun, aylar[t]);
        printf("  1 --> 08.00\n  2 --> 11.30\n  3 --> 15.00\n  4 --> 18.30\n");
        printf("\nLutfen secmek istediginiz saatin onundeki numarayi tuslayiniz: ");
        scanf("%d", &tren_saat);
        switch(tren_saat){

             case 1: printf("\nSectiginiz Sefer Saati: 08.00");
                                                                break;
             case 2: printf("\nSectiginiz Sefer Saati: 11.30");
                                                                break;
             case 3: printf("\nSectiginiz Sefer Saati: 15.00");
                                                                break;
             case 4: printf("\nSectiginiz Sefer Saati: 18.30");
                                                                break;

             default:  printf("\nYanlis sayi tusladiniz. Lutfen 1 ile 4 arasinda bir sayi tuslayiniz: ");
                       scanf("%d", &tren_saat);
                       switch(tren_saat){

                             case 1: printf("\nSectiginiz Sefer Saati: 08.00");
                                                                                break;
                             case 2: printf("\nSectiginiz Sefer Saati: 11.30");
                                                                                break;
                             case 3: printf("\nSectiginiz Sefer Saati: 15.00");
                                                                                break;
                             case 4: printf("\nSectiginiz Sefer Saati: 18.30");
                                                                                break;

                             }

        }



delay(3000);
system("CLS");



      int kisi_sayisi, kisi_yasi;
      int w;
      printf("\n\nAlmak istediginiz bilet sayisini giriniz: ");
      scanf("%d", &kisi_sayisi);
    //int dizi2[kisi_sayisi][kisi_yasi];
      int dizi2[kisi_sayisi][1];
      for(w=0;w<kisi_sayisi;w++){
        printf("\n%d. kisinin yasini giriniz: ", w+1);
        scanf("%d", &kisi_yasi);
          if(kisi_yasi>0 && kisi_yasi<18){
            printf("(18 yasindan kucukler icin bilet fiyatlarimiz %20 indirimlidir.)\n");
          }
          else{
            printf("(Yetiskinler icin bilet fiyatimiz sabittir.)\n");

          }
      }



delay(3000);
system("CLS");



      int q, z, x, y=0;
      int Koltuk_Sec[3][6];
      printf("\n~~~~~~~~~~~~ KOLTUK SECIMI ~~~~~~~~~~~~\n\n");

      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            Koltuk_Sec[q][x] = y+1;
            y++;

        }
      }
      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            printf("|%d|\t", Koltuk_Sec[q][x]);
        if(Koltuk_Sec[q][x]%9==0)
            printf("\n");
        }
      }
      printf("----------------------------- KORIDOR -----------------------------\n");



      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            Koltuk_Sec[q][x] = y+1;
            y++;

        }
      }
      for(q=0;q<3;q++){
        for(x=0;x<6;x++){
            printf("|%d|\t", Koltuk_Sec[q][x]);
        if(Koltuk_Sec[q][x]%27==0)
            printf("\n");
        }
        }



Ucakbileti_devami();
}


void BiletFiyati(int tren_koltugu)
{

system("CLS");



         int bilet_fiyati=180, agirlik;
           if(tren_koltugu>=28 && tren_koltugu<=36){
            printf("\nBilet Fiyati 180TL'dir.");
                printf("\nBagaja koyulacak agirligi giriniz: ");
                scanf("%d", &agirlik);
                printf("\nAGIRLIK: %dkg", agirlik);
                  if(agirlik>15){
                    bilet_fiyati*=1,1;
                  }
            }
           else if(tren_koltugu>0 && tren_koltugu<28){
            printf("\nBilet Fiyati 140TL'dir.");
            printf("\nBagaja koyulacak agirligi giriniz: ");
                scanf("%d", &agirlik);
                printf("\nAGIRLIK: %dkg", agirlik);
                  if(agirlik>15){
                    bilet_fiyati*=1,1;
                  }
           }
           else
            printf("Yanlis tusladiniz. Lutfen gosterimdeki koltuk numaralarindan birini giriniz.");
            BiletFiyati(tren_koltugu);


}


void Ucakbileti_devami()
{

        char YolcuBilgi3[kisi_sayisi][100];
        int YolcuBilgi4[kisi_sayisi][15];
        int biletalma, sifre, kart_tarihi, KartNo;
        printf("\n\nKoltuk seciminizi gerceklestirdiniz. Lutfen bekleyin..");
  delay(5000);
system("CLS");

        printf("\n\t\t< BILET SATIN ALMA >\n\n");
        printf("Bilet satin alma islemlerine hosgeldiniz.");
        //scanf("%d", &biletalma);
        printf("\n\n");

        printf("Bilet satin alma islemleri icin yolcu bilgileri gerekmektedir.\n\n  + Yolcu Bilgileri +\n\n");

               for(i=0;i<kisi_sayisi;i++){
                      printf("%d.kisinin yolcu bilgileri\n\n", i+1);
                      printf("Isminiz: ");
                      scanf("%s", YolcuBilgi3[i]);
                      printf("Soyisminiz: ");
                      scanf("%s", YolcuBilgi3[i]);
                      printf("Gmail adresiniz: ");
                      scanf("%s", YolcuBilgi3[i]);
                      printf("TC kimlik numaraniz: ");
                      scanf("%d", &TcNo);
                        if((strlen(TcNo)%11)!=0){
                            printf("yanlis");
                        }
                        else
                            printf("dogru");
                    }




                            printf("\t-ODEME ISLEMLERI-\n");
                            printf("Kart sahibinin ismi: ");
                            scanf("%s", isim);
                            printf("Kart sahibinin soyismi: ");
                            scanf("%s", soyisim);
                            printf("Kart numaraniz: ");
                            scanf("%d", &KartNo);
                            printf("\nKartinizin son kullanma tarihini giriniz: ");
                            scanf("%d", &kart_tarihi);
                              if(strlen(kart_tarihi)!=4){
                                printf("Lutfen kart tarihinizi 4 haneli olarak giriniz.");
                                printf("4 haneli Sifreniz: ");
                                scanf("%d", &sifre);
                              }
                            printf("4 haneli Sifreniz: ");
                            scanf("%d", &sifre);

    UcakBiletiFisi();
}


void UcakBiletiFisi()
{

    system("CLS");

        printf("\n\t***********************************************************");
        printf("\n\t\t\t~~ UCAK BILETI FISI ~~");
        printf("\n\n\t   | Kalkis Yapilacak Sehir: *%s* |\n   | Gidis Yapilacak Sehir: *%s* |", sehirlerr[a], sehirlerr[b]);

        printf("\n\tGidis Tarihiniz: %d %s 2019", gun, aylar[t]);

        printf("\n\n\tIsim: %s", isim);
        printf("\n\tSoyisim: %s", soyisim);
        printf("\n\tTC No: %d", TcNo);

       printf("\n\t*************************************************************\n\n\n\n\n\n");

}
