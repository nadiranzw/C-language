/*Tugas Besar Kelompok 12: Program Mini Quiz
1. M.Rivan Hafizh    H1A020064
2. Nadira Nazwa A.   H1A020072
3. Zelia Alixsia     H1A020074
4. M.Roihan Nur I.   H1A020076*/


#include<stdio.h> 
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record();
void help();
void edit_score(float, char[]);

int main()
{
	int countr, r, r1, count, i, n;
	float score;
	char choice;
	char playername[20];
	
	system("COLOR E9"); //deklarasi fungsi pengatur warna
	
	mainhome:
		system("cls");  //fungsi pengosongan layar
		printf("\n\t\t>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<");
		printf("\n\t\t>                               <");
		printf("\n\t\t>       MINI KUIS TEKNIK        <");
		printf("\n\t\t>                               <");
		printf("\n\t\t>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<");
		printf("\n");
		printf("\n\t\tJumlah soal   : 12 butir");
		printf("\n\t\tPoin prt soal : 200.000");
		printf("\n\t\tTema          : Pengetahuan Umum");
		printf("\n\t\t_________________________________");
		printf("\n");
		printf("\n\t\t BERDO'ALAH SEBELUM MENGERJAKAN");
		printf("\n\t\t_________________________________");
		printf("\n");
		printf("\n\t>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<");
		printf("\n\t>         Klik S untuk memulai KUIS              <");
		printf("\n\t>         Klik V untuk melihat hasil tertinggi   <");
		printf("\n\t>         Klik T untuk melihat Tips              <");
		printf("\n\t>         Klik Q untuk keluar                    <");
		printf("\n\t>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<");
		
	choice=toupper(getch());
	if(choice=='V')
	{
		show_record();
		goto mainhome;
	}
	else if(choice=='T')
	{
		help();
		getch();
		goto mainhome;
	}
	else if(choice=='Q')
	{
		exit(1);
	}
	else if(choice=='S')
	{
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\tMasukkan Nama :");
		gets(playername); //input variabel playername
		
		system("cls");
		printf("\n ------------------  Selamat datang %s di MINI KUIS TEKNIK --------------------------", playername);
		printf("\n\n tips :");
		printf("\n -------------------------------------------------------------------------");
		printf("\n >> Terdapat 2 sesi, yaitu sesi PEMANASAN dan sesi CARI POIN");
		printf("\n >> Di sesi PEMANASAN, terdapat 4 soal yang harus di jawab");
		printf("\n    Diperlukan 3 jawaban benar untuk lulus di sesi PEMANASAN");
		printf("\n    Jika sesi PEMANASAN tidak lulus, maka anda tidak mengikuti sesi selanjutnya");
		printf("\n >> Poin mulai dihitung saat sesi CARI POIN");
		printf("\n    Terdapat 12 soal. Menjawab 10 soal benar berhak mendapat 2 juta rupiah!");
		printf("\n >> Soal berbentuk pilihan ganda. Klik A, B ,C atau D untuk menjawab");
		printf("\n >> Jika jawaban benar, soal akan berlanjut.");
		printf("\n >> Jika jawaban salah, maka kuis akan selesai dan score akan tertampil");
		printf("\n");
		printf("\n        !!!!!!!!!!!!! SEMOGA BERUNTUNG !!!!!!!!!!!!!");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n Klik Y  untuk memulai kuis!");
		printf("\n");
		printf("\n Klik apapun untuk kembali ke menu!");
		
		if(toupper(getch())=='Y')
		{
			goto home;
		}
		else
		{
			goto mainhome;
			system("cls");
		}
		
		home:
			system("cls");
			count=0;
			for(i=1;i<=4;i++)
			{
				system("cls");
				r1=i;
				
				switch(r1)
				{
					case 1:
						printf("\n\nManakah di bawah ini yang merupakan nilai dari phi..?");
						printf("\n\nA.1,14\t\tB.2,14");
						printf("\n\nC.3,14\t\tD.4,14");
						if(toupper(getch())=='C')
						{
							printf("\n\nBenar!!!");
							count++; //increment count
							getch(); //membaca input dari user tanpa adanya input enter
							break; //kondisi selesai karena perintah sudah sesuai dengan case
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah C.3,14");
							getch();
							break;
						}
						
					case 2:
						printf("\n\n\nLokasi fakultas Teknik UNSOED berada di kota...");
						printf("\n\nA.Purbalingga\t\tB.Purwokerto");
						printf("\n\nC.Jakarta\t\tD.Cilacap");
						if(toupper(getch())=='A')
						{
							printf("\n\nBenar!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah A.Purbalingga");
							getch();
							break;
						}
						
					case 3:
						printf("\n\n\nDibawah merupakan software untuk menjalankan program C, kecuali..");
						printf("\n\nA.Borland\t\tB.DevC");
						printf("\n\nC.Eclipse\t\tD.CorelDraw");
						if(toupper(getch())=='D')
						{
							printf("\n\nBenar!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah D.CorelDraw");
							getch();
							break;
						}
					
					case 4:
						printf("\n\n\nSaat ini fakultas teknik UNSOED memiliki berapa prodi?");
						printf("\n\nA.2\t\tB.3");
						printf("\n\nC.4\t\tD.5");
						if(toupper(getch())=='D')
						{
							printf("\n\nBenar!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah D.5");
							getch();
							break;
						}		
				}
			}
		
		if(count>=3)
		{
			system("cls");
			printf("\n\n");
			printf("\t*** SELAMAT!!!! %s kamu diperbolehkan untuk melanjutkan sesi CARI POIN ***", playername);
			printf("\n\n\n\n\tTekan apapun untuk memulai!");
			getch();
			goto game;
		}
		else
		{
			system("cls");
			printf("\n\nMaaf, kamu gagal di sesi PEMANASAN, cobalah dilain waktu..");
			getch();
			goto mainhome;
		}
		
		game:
			countr=0;
			for(i=1;i<=10;i++)
			{
				system("cls");
				r=i;
				
				switch(r)
				{
					case 1:
						printf("\n\nTahun berapakah kapal Titanic Tenggelam?");
						printf("\n\nA.1972\t\tB.1973");
						printf("\n\nC.1974\t\tD.1975");
						if(toupper(getch())=='A')
						{
							printf("\n\nBenar!!!");
							countr++; //increment countr
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah A.1972");
							getch();
							goto score;
							break;
						}
						
					case 2:
						printf("\n\n\nIlmu yang mempelajari tentang gempa bumi disebut............,");
						printf("\n\nA.Seismology\t\tB.Cosmology");
						printf("\n\nC.Orology\t\tD.Etimology");
						if(toupper(getch())=='A')
						{
							printf("\n\nCorrect!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah A.Seismology");
							getch(); 
							goto score;
							break;
						}
						
					case 3:
						printf("\n\n\nIbukota Portugal adalah?");
						printf("\n\nA.Toronto\t\tB.Lisbon");
						printf("\n\nC.Los Santos\t\tD.Tomsk");
						if(toupper(getch())=='B')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah B.Lisbon");
							getch();
							goto score;
							break;
						}
						
					case 4:
						printf("\n\n\nHukum Induksi Elektromagnetik pertama kali dikemukakan oleh...");
						printf("\n\nA.Faraday\t\tB.Tesla");
						printf("\n\nC.Maxwell\t\tD.Coulomb");
						if(toupper(getch())=='A')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah A.Faraday");
							getch();
							goto score;
							break;
						}
						
					case 5:
						printf("\n\n\nJika ikan meminum air, maka sapi meminum..");
						printf("\n\nA.Susu\t\tB.Rumput");
						printf("\n\nC.Cola\t\tD.Air");
						if(toupper(getch())=='D')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah D.Air");
							getch();
							goto score;
							break;
						}
						
					case 6:
						printf("\n\n\nManakah elemen yang terkandung dalam Vitamin B12?");
						printf("\n\nA.Zinc\t\tB.Cobalt");
						printf("\n\nC.Calcium\t\tD.Iron");
						if(toupper(getch())=='B')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah B.Cobalt");
							getch();
							goto score;
							break;
						}
						
					case 7:
						printf("\n\n\nApa nama Nasional negara Jepang?");
						printf("\n\nA.Polska\t\tB.Hellas");
						printf("\n\nC.Drukyul\t\tD.Nippon");
						if(toupper(getch())=='D')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah D.Nippon");
							getch();
							goto score;
							break;
						}
					
					case 8:
						printf("\n\n\nJarak terpendek antara tali busur dengan titik pusat lingkaran adalah..");
						printf("\n\nA.Jari-jari\t\tB.Apotema");
						printf("\n\nC.Diameter\t\tD.Busur");
						if(toupper(getch())=='B')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah B.Apotema");
							getch();
							goto score;
							break;
						}
					
					case 9:
						printf("\n\n\nJumlah rusuk limas segilima adalah...");
						printf("\n\nA.10\t\tB.12");
						printf("\n\nC.14\t\tD.15");
						if(toupper(getch())=='A')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah A.10");
							getch();
							goto score;
							break;
						}
						
					case 10:
						printf("\n\n\nBlack Box yang terpasang di pesawar terbang berwarna...");
						printf("\n\nA.Oranye\t\tB.Hitam");
						printf("\n\nC.Putih\t\tD.Merah");
						if(toupper(getch())=='A')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah A.Oranye");
							getch();
							goto score;
							break;
						}
						
					case 11:
						printf("\n\n\nSungai terpanjang di dunia adalah...?");
						printf("\n\nA.Amazon\t\tB.Nil");
						printf("\n\nC.Yang tze\t\tD.Musi");
						if(toupper(getch())=='B')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah C.Nil");
							getch();
							goto score;
							break;
						}
					
					case 12:
						printf("\n\n\nmanakah film yang dianugerahi film terbaik ada piala Oscar 2010?");
						printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island");
						printf("\n\nC.The King's Speech\t\tD.The Reader");
						if(toupper(getch())=='C')
						{
							printf("\n\nBenar!!!");
							countr++;
							getch();
							break;
						}
						else
						{
							printf("\n\nSalah!!! Jawaban yang benar adalah C.The King's Speech");
							getch();
							goto score;
							break;
						}
				}
			}
		
		score :
			system("cls");
			score=(float)countr*200000; //assign nilai score dari countr*200000
			if(score>0.00 && score<2000000)
			{
				printf("\n\n\t\t**************** SELAMAT ****************");
				printf("\n\tKamu mendapatkan %.2f", score);
				goto go;
			}
		
			else if(score==2000000.00)
			{
				printf("\n\n\n\t\t**************** SELAMAT ****************");
				printf("\n\t\t\t\tKAMU MENDAPATKAN HADIAH TERTINGGI!!!!!!!!!");
				printf("\n\t\tKamu mendapatkan %.2f", score);
				printf("\n\t\tTerimakasih!!");
				goto go;
			}
		
		go:
			printf("\n\n Klik Y  untuk memulai kembali");
			printf("\n Klik apapun untuk kembali ke menu");
			if(toupper(getch())=='Y')
			{
				goto home;
			}
			else
			{
				edit_score(score, playername);
				goto mainhome;
			}
	}
}

void show_record()
{
	system("cls");
	char name[20];
	float scr;
	FILE *f; //assign FILE untuk f
	f=fopen("score.txt","r"); //assign membuka file
	fscanf(f, "%s%f", &name, &scr); //input name dan scr ke dalam file
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t%s telah berhasil mendapat skor tertinggi, yaitu : %0.2f", name, scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f); //assign menutup file
	getch();
}

void help()
{
	system("cls");
	printf("\n");
	printf("\n                              TIPS");
	printf("\n --------------------------------------------------------------------------");
	printf("\n >> Terdapat 2 sesi, yaitu sesi PEMANASAN dan sesi CARI POIN");
	printf("\n >> Di sesi PEMANASAN, terdapat 4 soal yang harus di jawab");
	printf("\n    Diperlukan 3 jawaban benar untuk lulus di sesi PEMANASAN");
	printf("\n    Jika sesi PEMANASAN tidak lulus, maka anda tidak mengikuti sesi selanjutnya");
	printf("\n >> Poin mulai dihitung saat sesi CARI POIN");
	printf("\n    Terdapat 12 soal. Menjawab 10 soal benar berhak mendapat jackpot 10 juta rupiah!");
	printf("\n >> Soal berbentuk pilihan ganda. Klik A, B ,C atau D untuk menjawab");
	printf("\n >> Jika jawaban benar, soal akan berlanjut.");
	printf("\n >> Jika jawaban salah, maka kuis akan selesai dan score akan tertampil");
	printf("\n");
	printf("\n        !!!!!!!!!!!!! SEMOGA BERUNTUNG !!!!!!!!!!!!!");
}

void edit_score(float score, char plnm[20])
{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f", &nm, &sc);
	if(score>=sc)
	{
		sc=score;
		fclose(f);
		f=fopen("score.txt","w");
		fprintf(f,"%s\n%.2f",plnm,sc);
		fclose(f);
	}
}
