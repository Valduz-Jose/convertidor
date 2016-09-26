#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcion;
	float libras,kilogramos,centigrados,kelvin,kmmin,cms;
	system("cls");
	fflush(stdin);
	system("color F0");
	do{
		do{
			printf("\t\t\t\t\t\tConvertidor\t\t\t\t\t\t");
			printf("\n\n\t\t1.Kilogramos a Libras");
			printf("\n\t\t2.Grados Kelvin a Grados Centigrados");
			printf("\n\t\t3.Km/min a Cm/s");
			printf("\n\t\t4.Salir");
			printf("\n\t\t");
			scanf("%d",&opcion);
			system("cls");
		}while(opcion<1||opcion>4);
		
		switch(opcion){
			case 1:printf("\t\t\t\t\t\tConvertidor\t\t\t\t\t\t");
			printf("\n\n\t\t\t1.Kilogramos a Libras");
			printf("\n\t\tIntroduce los Kilogramos a Convertir: ");
			scanf("%f",&kilogramos);
			libras=kilogramos*2,20462;
			printf("\n\t\tLibras: %.2f",libras);
			printf("\n\t\t");
			break;
			case 2:printf("\t\t\t\t\t\tConvertidor\t\t\t\t\t\t");
			printf("\n\n\t\t\t2.Grados Kelvin a Grados Centigrados");
			printf("\n\t\tIntroduce Los Grados Kelvin: ");
			scanf("%f",&kelvin);
			centigrados=kelvin-273.15;
			printf("\n\t\tCentigrados: %.2f",centigrados);
			printf("\n\t\t");
			break;
			case 3:printf("\t\t\t\t\t\tConvertidor\t\t\t\t\t\t");
			printf("3.\n\n\t\t\tKm/min a Cm/s");
			printf("\n\t\tIntrodusca los Km/min: ");
			scanf("%f",&kmmin);
			cms=kmmin*1666,67;
			printf("Cm/seg: %.2f",cms);
			printf("\n\t\t");
			break;
			case 4:printf("\t\t\t\t\t\tConvertidor\t\t\t\t\t\t");
			printf("\n\n\n\t\t\t\tHasta Luego");
			default:
				break;
			system("cls");
		}
		system("PAUSE");
	}while(opcion!=4);
	system("cls");
	
	return 0;
}
