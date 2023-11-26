#include<stdio.h>
#include<stdlib.h>
int sh,obreros,cont,ht,he,hte,sb,se,ste,st,continuar;
int cont1,opc,opc1,ht1,sh1,sb1,imp,st1,so,se1,ta,continuar1,again;
int main (void)
{
	while (opc1 != 3)
	{	
		system("cls");
		printf("1) Sueldo semanal");
		printf("\n2) Trabajadores de CIA");
		printf("\n3) Salir");
		printf("\nElige una opci%cn:\n",162);
		scanf("%d",&opc1);
		switch (opc1)
		{
			case 1:
			{
				system("cls");
				printf("0) regresar\n");
				printf("Ingresa la cantidad de obreros:\n");
				scanf("%d",&obreros);
				if (obreros > 0)
				{
					for(cont = 1; cont <= obreros ; cont ++)
					{
						system("cls");
						printf("contador = %d",cont);
						printf("\n%cCu%cl es tu salario por hora?\n",168,160);
						scanf("%d",&sh);
						printf("Ingresa las horas trabajadas:\n");
						scanf("%d",&ht);
						if (ht < 40)
						{
							sb = sh * ht;
							do
							{
								system("cls");
								printf("\nTu sueldo ser%c:\n%d\n",160,sb);
								printf("\n1) continuar\n");
								scanf("%d",&continuar);
							}while ( continuar != 1);
							continuar = 0;
						}
						else if(ht == 40)
						{
							sb = sh * ht;
							do
							{
								system("cls");
								printf("\nTu sueldo ser%c:\n%d\n",160,sb);
								printf("\n1) continuar\n");
								scanf("%d",&continuar);
							}while ( continuar != 1);
							continuar = 0;
						}
						else if(ht > 40 && ht <= 48)
						{
							sb = sh * 40;
							he = ht - 40;
							se = (he * sh) * 2;
							st = se + sb;
							do
							{
								system("cls");
								printf("\nTu sueldo ser%c:\n%d\n",160,st);
								printf("\n1) continuar\n");
								scanf("%d",&continuar);
							}while ( continuar != 1);
							continuar = 0;
						}
						else if(ht > 48)
						{
							sb = sh * 40;
							se = (8 * sh) * 2;
							hte = ht - 48;
							ste = (hte * sh) * 3;
							st = se + sb + ste;
							do
							{
								system("cls");
								printf("\nTu sueldo ser%c:\n%d\n",160,st);
								printf("\n1) continuar\n");
								scanf("%d",&continuar);
							}while ( continuar != 1);
							continuar = 0;
						}
					}
				}
				else
				{
					do
					{
						system("cls");
						printf("\nregresando...\n");
						printf("\n1) continuar\n");
						scanf("%d",&continuar);
					}while (continuar != 1);
					continuar = 0;
				}
				break;
			}
			case 2:
			{
				while(cont1 < 4 || opc !=3)
				{
					system("cls");
					cont1 ++;
					printf("\n1) Obrero\n");
					printf("\n2) Empleado\n");
					printf("\n3) Regresar\n");
					printf("\ncontador = %d",cont1);
					printf("\nElije una opci%cn:\n",162);
					scanf("%d",&opc);
					switch(opc)
					{
						case 1:
						{
							system("cls");
							printf("\nOBRERO\n");
							printf("Ingresa tus horas de trabajo:\n");
							scanf("%d",&ht1);
							printf("Ingresa tu sueldo por hora:\n");
							scanf("%d",&sh);
							sb1 = sh * ht;
							if ( sb1 < 100000)
							{
								sb1 = sh * ht1;
								so = so + sb1;
							}
							else
							{
								sb1 = sh * ht1;
								imp = ( 15 * 100 )/ sb1;
								st1 = sb1 - imp;
								so = so + st1;
							}
							break;
						}
						case 2:
						{
							system("cls");
							printf("\nEMPLEADO\n");
							printf("Ingresa tus horas de trabajo:\n");
							scanf("%d",&ht1);
							printf("Ingresa tu sueldo por hora:\n");
							scanf("%d",&sh);
							sb1 = sh * ht1;
							if ( sb1 < 100000)
							{
								sb1 = sh * ht1;
								se1 = se1 + sb1;
							}
							else
							{
								sb1 = sh * ht1;
								imp = ( 15 * 100 )/ sb;
								st1 = sb1 - imp;
								se1 = se1 + st1;
							}
							break;
						}
						case 3:
						{
							cont1 = 4;
							break;
						}
						default:
						{
							do
							{
								system("cls");
								printf("\nOpci%cn no valida\n",162);
								printf("\n1) Intentarlo denuevo\n");
								scanf("%d",&again);
								cont1 = 0;
							}while (again != 1);
							again = 0;
							break;
						}
					}
				}
				cont1 = 0;
				if (opc == 1 || opc == 2)
				{
					do
					{
						system("cls");
						printf("\n Empleados: %d",se1);
						printf("\n Obreros: %d",so);
						ta = se1 + so;
						printf("\n Total de sueldos: %d",ta);
						printf("\n1) continuar\n");
						scanf("%d",&continuar1);
					}while (continuar1 != 1);
					continuar1 = 0;
					se1 = 0;
					so = 0;
					cont1 = 0;
				}
				else
				{
					do
					{
						system("cls");
						printf("\nregresando...\n");
						printf("\n1) continuar\n");
						scanf("%d",&continuar1);
					}while (continuar1 != 1);
				}
			}
			case 3:
			{
				system("cls");
				printf("\nGracias por utilizar mi programa :D ATTE charloek\n");
				break;
			}
			default:
			{
				do
				{
					system("cls");
					printf("\nOpci%cn no valida\n",162);
					printf("\n1) Intentarlo denuevo\n");
					scanf("%d",&again);
					cont1 = 0;
				}while (again != 1);
				again = 0;
				break;
			}
		}
	}
}
