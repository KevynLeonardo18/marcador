#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {


	int matriz[4][5];
	int x;
	int y;
	int total=0;
	int respuesta;
	char nombre[50];
	int rif;
	int vendedor=0;
	int marcador=0;
	int cantidad;
	int decision;
	int contador1;
	int sumaf;
	int sumac;
	int comparacion=0;
	

	
	
		for(x=0; x<4; x++){
				for(y=0; y<5; y++){
					matriz[x][y]=0;
				}
		
			}
		printf("Existe algun cliente para comprar? 1/0: ");
		scanf("%d", &respuesta);
		printf("\n");
	
	do{
		
		if(respuesta == 1){
				 	
			printf("Ingrese su nombre: ");
			scanf("%s", &nombre);
			printf("Ingrese su Rif: ");
			scanf("%s", &rif);
		
		
			printf("\n");
			
			
			do{	
				
				
				while(1){
					
					printf("Que vendedor lo atendio?: 1/4: ");
					scanf("%d", &vendedor);
					
					if(vendedor >= 1 && vendedor < 5){
						break;
					
					}else{
						printf("Valor incorrecto, vuelva a intentanrlo\n");
					}
					
				}
				
				
				while(1){
				
				printf("que tipo de marcador compro? 1/5: ");
				scanf("%d", &marcador);
				
				if(marcador >=1 && marcador <6){
					break;
				}else{
					printf("Valor incorrecto, vuelva a intentarlo\n");
				}
		
			
				}
			
				printf("Ingrese la cantidad de marcadores comprados :", vendedor, marcador);
				scanf("%d", &cantidad);
				
				matriz[vendedor][marcador] += cantidad;
				
				
				printf("Desea realizar mas compras? 1/0: ");
				scanf("%d", &decision);
								
			}while(decision !=0);
			
				printf("\n");
				
					
				
			printf("Existe OTRO cliente para comprar? 1/0: ");
			scanf("%d", &respuesta);
			printf("\n");
				
			
			
		
		}else if(respuesta != 1 || respuesta != 0){
			
			printf("Ingrese un valor valido: ");
			printf("\n\n");
		
		}else {
			break;
		
		}
															
	}while(respuesta != 0);

		for(x=0; x<4; x++){
			for(y=0; y<5; y++){
				sumaf+= matriz[x][y]; 
			}	
		
		}
	
		printf("la cantidad de marcadores por tipo vendidos por cada vendedor es: %d ", sumaf );
		
		printf("\n\n");
		
			for(x=0; x<4; x++){
				for(y=0; y<5; y++){
				 
			}	
			sumac+= matriz[x][y];
		}
	
		printf("La cantidad de marcadores vendidos por cada vendedor es de: %d ", sumac );
		printf("\n");
		
		
		for(x=0; x<4; x++){
			for(y=0; y<5; y++){
				printf("%d ", matriz[x][y]);
			}	
			printf("\n");
		}



	system("pause");
	return 0;
}
