#include<stdio.h>
#include<string.h>
struct _letra{
	char contenido;
	struct _letra *siguiente;
	struct _letra *anterior;
};

struct _letra * primera, *ultima;

void ingresar(char caracter){
	struct _letra *nuevo;
	nuevo = (struct _letra *)malloc(sizeof(struct _letra));

	if(nuevo==NULL)
		printf("No hay memoria");
		else{
			nuevo->contenido = caracter;
			nuevo->siguiente = NULL;
			nuevo->anterior = NULL;
		}
	if(primera==NULL){
		primera==nuevo;
		ultima==nuevo;
	}				
	else{
		ultima->siguiente = nuevo;
		nuevo->anterior = ultima;
		ultima = nuevo;
	}
}

void mostrar(){
	struct _letra *tmp = primera; //para recorrer
	while(tmp!=NULL){
		printf("%c", tmp->contenido);
		tmp = tmp->siguiente;//lo hacemos avanzar
	}
	
}

void mostrar_inversa(){
	struct _letra *tmp = ultima;
	while(tmp!=NULL){
		printf("%c", tmp->contenido);
		tmp=tmp->anterior;
	}
	
}

void es_palindrome(){
	
}

int main (int argc, char* argv[]){
	int i=0;
	printf("La cantidad de argumentos %i", argc);
	printf("Analizando la palabra %s", argv[1], strlen(argv[1]));
	
	for(int i = 0; i < strlen(argv[1]); i++){
		ingresar(argv[1][i]);
	}
	
	mostrar();
		
}
