#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<Windows.h>

int main()

{
	int seçim1, seçim2, user, parola, yatırma=0, çekme=0, bakiye_12253059=1000, bakiye_12253049=1000, gonderme=0, hatalı;

	setlocale(LC_ALL, "Turkish"); // Türkçe karakterler kullanımı için

	while(1) // ilk menüye dönmek için
	{
	printf("\t\t\t ==PAMUKKALE BANK ©==\n");
	printf("\tOturum Açma Menüsü\n\n");
	printf("1) Hesabınızla Giriş Yapın\n");
	printf("2) Çıkış\n\n");
	printf("Seçiminiz ? <1-2>:\n\n");
	scanf_s("%d",&seçim1);

	if(seçim1!=1 && seçim1!=2) // 1 veya 2'den farklı bir giriş yaparsa uyarır
	{
		printf("Hatalı giriş yaptınız. Lütfen tekrar deneyiniz...\a\n");
		printf("------------------------------------------------\n\n");
	}

			switch(seçim1)
	{
	case 1: // oturum aç seçeneği seçildiyse..
		system("CLS"); // ekranı temizler

		for(hatalı=1; hatalı<=3;) // 3 yanlış giriş hakkı	
		{
			printf("Lütfen Hesap Bilgilerinizi Giriniz:\n\n");
			printf("Kullanıcı adı: ");
			scanf_s("%d",&user);
			printf("Parola: ");
			scanf_s("%d",&parola);

			printf("\nBilgiler Doğrulanıyor. . .");
			Sleep(1500);
			printf("\n\n");

		if((user==12253059 && parola==12345) || (user==12253049 && parola==54321)) // 2 kullanıcı mevcut	
		{
			system("CLS");

			do
			{
				if(user==12253059)
					printf("\t\t\t\tHesap: Murat Saygılı\n");
				if(user==12253049)
					printf("\t\t\t\tHesap: Yusuf Okumazzzz\n");
			printf("\t\t\t      BANKA İŞLEMLERİ MENÜSÜ\n\n");
			printf("1) Para Yatırma\n");
			printf("2) Para Çekme\n");
			printf("3) Bakiye Görüntüleme\n");
			printf("4) Para Gönderme\n");
			printf("5) Oturumu Kapat\n\n");

			printf("Seçiminiz ? <1-5>");
			scanf_s("%d",&seçim2);

			if(seçim2!=1 && seçim2!=2 && seçim2!=3 && seçim2!=4 && seçim2!=5) // 1,2,3,4,5'den farklı seçim yapılırsa uyar
			{
				printf("Hatalı giriş yaptınız. Lütfen tekrar deneyiniz...\a\n");
				printf("------------------------------------------------\n\n");
			}

			switch(seçim2)
			{
			case 1: // para yatırma
				printf("Yatıracağınız Para Miktarını TL Cinsinden Giriniz : ");
				scanf_s("%d",&yatırma);

				if(user==12253059)
				{	
					bakiye_12253059=bakiye_12253059 + yatırma;
					printf("Hesabınıza %d TL Yatırılıyor. . .\n", yatırma);
					Sleep(1500);
					printf("İşleminiz başarıyla gerçekleştirildi!\n");
					printf("Mevcut Bakiyeniz %dTL'dir.\n\n", bakiye_12253059);
				}
				if(user==12253049)
				{	
					bakiye_12253049=bakiye_12253049 + yatırma;
					printf("Hesabınıza %d TL Yatırılıyor. . .\n", yatırma);
					Sleep(1500);
					printf("İşleminiz başarıyla gerçekleştirildi!\n");
					printf("Mevcut Bakiyeniz %dTL'dir.\n\n", bakiye_12253049);
				}
				break;

			case 2: // para çekme
				printf("Çekeceğiniz Para Miktarını TL Cinsinden Giriniz :");
				scanf_s("%d",&çekme);

				if(user==12253059 && çekme<=bakiye_12253059)
				{	
					bakiye_12253059=bakiye_12253059 - çekme;
					printf("Hesabınızdan %d TL Çekiliyor. . .\n", çekme);
					Sleep(1500);
					printf("İşleminiz başarıyla gerçekleştirildi!\n");
					printf("Kalan Bakiyeniz %dTL'dir.\n\n", bakiye_12253059);
				}
				if(user==12253049 && çekme<=bakiye_12253049)
				{	
					bakiye_12253049=bakiye_12253049 - çekme;
					printf("Hesabınızdan %d TL Çekiliyor. . .\n", çekme);
					Sleep(1500);
					printf("İşleminiz başarıyla gerçekleştirildi!\n");
					printf("Kalan Bakiyeniz %dTL'dir.\n\n", bakiye_12253049);
				}
				else if(çekme>bakiye_12253059 || çekme>bakiye_12253049) // çekmek istenilen miktar bakiyeden büyükse uyarır
				{
								printf("\nHesabınızdan %d TL çekiliyor. . .\n", çekme);
								Sleep(1500);
								printf("\nYETERSİZ BAKİYE !!\a\n");
								printf("Malesef işleminiz gerçekleştirilemedi..\n\n");
								Sleep(500);
				}
				break;
				
			case 3: // bakiye görüntüleme
				if(user==12253059)
					printf("Mevcut Bakiyeniz %d TL'dir.\n\n", bakiye_12253059);
				if(user==12253049)
					printf("Mevcut Bakiyeniz %d TL'dir.\n\n", bakiye_12253049);
				break;

			case 4: // para gönderme
				printf("Göndereceğiniz Para Miktarını TL Cinsinden Giriniz: ");
				scanf_s("%d",&gonderme);

					if(user==12253059 && gonderme<=bakiye_12253059)
					{
						bakiye_12253059=bakiye_12253059 - gonderme;
						bakiye_12253049=bakiye_12253049 + gonderme;
						printf("Hesabınızdan %d TL Yusuf Okur'un Hesabına Gönderiliyor. . .\n", gonderme);
						Sleep(1500);
						printf("İşleminiz Başarıyla Gerçekleştirildi.\n");
						printf("Mevcut Bakiyeniz %d TL'dir.\n\n", bakiye_12253059);
					}
					if(user==12253049 && gonderme<=bakiye_12253049)
					{
						bakiye_12253049=bakiye_12253049 - gonderme;
						bakiye_12253059=bakiye_12253059 + gonderme;
						printf("Hesabınızdan %d TL Murat Saygılı'nın Hesabına Gönderiliyor. . .\n", gonderme);
						Sleep(1500);
						printf("İşleminiz Başarıyla Gerçekleştirildi.\n");
						printf("Mevcut Bakiyeniz %d TL'dir.\n\n", bakiye_12253049);
					}
					else if(gonderme>bakiye_12253059 || gonderme>bakiye_12253049) //gönderilmekistenenmiktarbakiyedenbüyükseuyarır
					{
						printf("Hesabınızdan %d TL Gönderiliyor. . .\n", gonderme);
						Sleep(1500);
						printf("\n YETERSİZ BAKİYE !!\a\n");
						printf("\nMalesef İşleminiz Gerçekleştirilemedi..\n\n");
						Sleep(500);
					}
				break;
			case 5: // oturumdan çıkış
				printf("\nOturumunuz Kapatılıyor. . .");
				Sleep(2000);
				system("CLS");
				break;
			}
			}

			while(seçim2!=5);

			break;
		}

		else // hatalı giriş yapıldığında uyarı mesajı..
		{
			printf("Yanlış Giriş Yaptınız.	%d Deneme Hakkınız Kaldı..\a\n", 3 - hatalı);
			printf("-------------------------------------------------\n\n");
			hatalı++;
		}
		}
		if(hatalı==4) // 4 kez hatalı giriş yaptığında ana menüye döndürür.
		{
			printf("3 Kez Yanlış Giriş Yaptınız. Ana Menüye Yönlendiriliyorsunuz..\a");
			Sleep(1500);
			system("CLS");
			break;
		}

		break;
	
		case 2: // çıkış mesajı
			printf("Güle Güle Efendim. Yine Bekleriz..\n\n");
			Sleep(2000);
			break;
		}
		if(seçim1==2) // ilk menüde çıkış seçilirse direk çıkarr
			return 0;
		}
		system("pause");

		return 0;
	}
