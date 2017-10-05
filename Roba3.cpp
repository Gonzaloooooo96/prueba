#include<stdio.h>
#include<stdlib.h>
struct _nodo{
	int tamano;


	struct _nodo *siguiente;
};
struct _nodo1{
	int peaton;
	int ladoCarril;
	struct _nodo1 *siguiente;
};
struct _nodo *primeroc1,*ultimoc1,*actualc1;
struct _nodo *primeroc2,*ultimoc2,*actualc2;
struct _nodo *primeroc3,*ultimoc3,*actualc3;
struct _nodo *primeroc4,*ultimoc4,*actualc4;
struct _nodo1 *primerop1,*ultimop1,*actualp1;
struct _nodo1 *primerop2,*ultimop2,*actualp2;

void menu(){
	printf("-----------------------------------------------------------------\n");
	printf("Ingrese comando \n");
	printf("1. Agregar auto a un Carril\n");
	printf("2. Agregar Peaton\n");
	printf("3. Liberar trafico con mayor espacio ocupado\n");
	printf("4. Mostrar historial carril\n");
	printf("5. Mostrar historial peatones\n");
	printf("6. Mostrar estado de los carriles\n");
	printf("-----------------------------------------------------------------\n");
}
void mostrarCarril(){
	printf("Historial cada carril: \n \n");
	struct _nodo *tmpc1,*tmpc2,*tmpc3,*tmpc4;
	tmpc1=primeroc1;
	tmpc2=primeroc2;
	tmpc3=primeroc3;
	tmpc4=primeroc4;
	if(primeroc1==NULL){
		printf("Carril 1: \nNo hay vehiculo en el carril\n");
	}
	else {
        printf("Carril 1: \n");
		while(tmpc1!=NULL){
			printf("-Espacio ocupado: %d \t\n",tmpc1 ->tamano);
			tmpc1=tmpc1->siguiente;
		}
	}
		if(primeroc2==NULL){
		printf("\nCarril 2: \nNo hay vehiculo en el carril\n");
	}
	else {
        printf("\nCarril 2: \n");
		while(tmpc2!=NULL){
			printf("-Espacio ocupado: %d \t \n",tmpc2 ->tamano);
			
			tmpc2=tmpc2->siguiente;
		}
	}
		if(primeroc3==NULL){
		printf("\nCarril 3: \nNo hay vehiculo en el carril\n");
	}
	else {
        printf("\nCarril 3: \n");
		while(tmpc3!=NULL){
			printf("-Espacio ocupado: %d \t \n",tmpc3 ->tamano);
			
			tmpc3=tmpc3->siguiente;
		}
	}
		if(primeroc4==NULL){
		printf("\nCarril 4: \nNo hay vehiculo en el carril\n");
	}
	else {
        printf("\nCarril 4: \n");
		while(tmpc4!=NULL){
			printf("-Espacio ocupado: %d \t \n",tmpc4 ->tamano);
			
			tmpc4=tmpc4->siguiente;
		}
	}
}
void mostrarpeaton(){
	printf("\nHistorial paso de peatones: \n");
	struct _nodo1 *tmpp1,*tmpp2;
	tmpp1=primerop1;
	tmpp2=primerop2;
    if(primerop1==NULL){
		printf("No hay peaton carril 1 \n");
	}
	else
	{
        printf("Carril 1: \n");
		while(tmpp1!=NULL){
			printf("-Cantidad peatones: %d \t \n",tmpp1 ->peaton);
			tmpp1=tmpp1->siguiente;
		}
	}
	if(primerop2==NULL){
		printf("No hay peaton carril 2\n");
	}
	else
	{
        printf("\n Carril 2: \n");
		while(tmpp2!=NULL){
			printf("-Cantidad peatones: %d \t \n",tmpp2 ->peaton);
			tmpp2=tmpp2->siguiente;
		}
	}
	
}
void agregarVehiculoc1(){
	struct _nodo *nuevoNodo;
	nuevoNodo = (struct _nodo*) malloc(sizeof(struct _nodo));
	if(nuevoNodo ==NULL){
		printf("es imposible crear nuevo nodo");
	}
	else{
		printf("ingrese Tama\xA4o: ");
		scanf("%d",&nuevoNodo->tamano);
		
		nuevoNodo->siguiente=NULL;
								  if(primeroc1==NULL){
								  	primeroc1=nuevoNodo;
								  	ultimoc1=nuevoNodo;
								  }
								  else{
								  	ultimoc1->siguiente=nuevoNodo;
								  	ultimoc1=nuevoNodo;
								  }
								 
	}
	
}
void agregarVehiculoc2(){
	struct _nodo *nuevoNodo;
	nuevoNodo = (struct _nodo*) malloc(sizeof(struct _nodo));
	if(nuevoNodo ==NULL){
		printf("es imposible crear nuevo nodo");
	}
	else{
		printf("ingrese Tama\xA4o: ");
		scanf("%d",&nuevoNodo->tamano);
		
		nuevoNodo->siguiente=NULL;
								  if(primeroc2==NULL){
								  	primeroc2=nuevoNodo;
								  	ultimoc2=nuevoNodo;
								  }
								  else{
								  	ultimoc2->siguiente=nuevoNodo;
								  	ultimoc2=nuevoNodo;
								  }
								 
	}
	
}
void agregarVehiculoc3(){
	struct _nodo *nuevoNodo;
	nuevoNodo = (struct _nodo*) malloc(sizeof(struct _nodo));
	if(nuevoNodo ==NULL){
		printf("es imposible crear nuevo nodo");
	}
	else{
		printf("ingrese Tama\xA4o: ");
		scanf("%d",&nuevoNodo->tamano);
		
		nuevoNodo->siguiente=NULL;
								  if(primeroc3==NULL){
								  	primeroc3=nuevoNodo;
								  	ultimoc3=nuevoNodo;
								  }
								  else{
								  	ultimoc3->siguiente=nuevoNodo;
								  	ultimoc3=nuevoNodo;
								  }
								 
	}
	
}
void agregarVehiculoc4(){
	struct _nodo *nuevoNodo;
	nuevoNodo = (struct _nodo*) malloc(sizeof(struct _nodo));
	if(nuevoNodo ==NULL){
		printf("es imposible crear nuevo nodo");
	}
	else{
		printf("ingrese Tama\xA4o: ");
		scanf("%d",&nuevoNodo->tamano);
		
		nuevoNodo->siguiente=NULL;
								  if(primeroc4==NULL){
								  	primeroc4=nuevoNodo;
								  	ultimoc4=nuevoNodo;
								  }
								  else{
								  	ultimoc4->siguiente=nuevoNodo;
								  	ultimoc4=nuevoNodo;
								  }
								 
	}
	
}
void agregarPeatonp1(){
	struct _nodo1 *nuevoNodo1;
	nuevoNodo1 = (struct _nodo1*) malloc(sizeof(struct _nodo1));
	if(nuevoNodo1 ==NULL){
		printf("es imposible crear nuevo nodo");
	}
	else{
		printf("Ingrese cantidad peatones: ");
		scanf("%d",&nuevoNodo1->peaton);
		nuevoNodo1->siguiente=NULL;
								  if(primerop1==NULL){
								  	primerop1=nuevoNodo1;
								  	ultimop1=nuevoNodo1;
								  }
								  else{
								  	nuevoNodo1->siguiente=primerop1;
								  	primerop1=nuevoNodo1;
								  }
	}
}
void agregarPeatonp2(){
	struct _nodo1 *nuevoNodo1;
	nuevoNodo1 = (struct _nodo1*) malloc(sizeof(struct _nodo1));
	if(nuevoNodo1 ==NULL){
		printf("es imposible crear nuevo nodo");
	}
	else{
		printf("Ingrese cantidad peatones: ");
		scanf("%d",&nuevoNodo1->peaton);
		nuevoNodo1->siguiente=NULL;
								  if(primerop2==NULL){
								  	primerop2=nuevoNodo1;
								  	ultimop2=nuevoNodo1;
								  }
								  else{
								  	nuevoNodo1->siguiente=primerop2;
								  	primerop2=nuevoNodo1;
								  }
	}
}
main(){
	printf("Copia3\n");
	int opcion;
	int cont1=0;
	int cont2=0; 
	int cont3=0;
	int cont4=0;

		 do{
		 	menu();
		 	scanf("%d",&opcion);
		 	if(opcion==1){
		 		printf("ingrese numero del carril: ");
				int carril;

		 		scanf("%d",&carril);
		 		if(carril==1){
		 			agregarVehiculoc1();
		 			cont1++;
		 		}
		 		else if(carril==2){
		 			agregarVehiculoc2();
		 			cont2++;
		 		}
		 		else if(carril==3){
		 			agregarVehiculoc3();
		 			cont3++;
			 	}
		 		else if(carril==4){
		 			agregarVehiculoc4();
		 			cont4++;
		 		}
		 	}
		 	else if(opcion==2){
				printf("ingrese el lado del peaton(1 o 2): ");
				int lado;

		 		scanf("%d",&lado);
		 		if(lado==1){
		 			agregarPeatonp1();
		 		}
		 		else if(lado==2){
		 			agregarPeatonp2();
		 		}
		 	}
		 	else if(opcion==3){
		 		if (cont1+cont2>cont3+cont4){
					cont1=0;
					cont2=0;
		 		}
		 		else {
					cont3=0;
					cont4=0;
		 		}
		 	}
		 	else if(opcion ==4){
		 		mostrarCarril();
		 	}
		 	else if(opcion==5){
		 		mostrarpeaton();
		 	}
		 	else if(opcion==6){
		 		printf("carril 1: %d\n",cont1);
		 		printf("carril 2: %d\n",cont2);
		 		printf("carril 3: %d\n",cont3);
		 		printf("carril 4: %d\n",cont4);
		 	}
		 	else if(opcion==7){
		 		mostrarpeaton();
		 	}
		 	
		 }while(opcion!=0);
 		 printf("adios... \n");
	system("pause");
	
	
	
	
}
