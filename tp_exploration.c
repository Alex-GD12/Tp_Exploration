#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//structures


//fonctions


//début
int main () {
	
	//variables
	int  destination = 0;
	int tamponDestination = 0;
	
	printf ("Bonjour aventurier, vous souhaitez allez dans le desert du nord (1) ? ou dans les plaines du sud (2) ?\n");
	
	scanf("%d", &destination);
	
	if( destination == 1){
		printf("Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole, vous ne voyez plus que du sable a perte d'horizon, du sable ? Non des cendres... \n");
	}

	if( destination == 2){
		printf("Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole, vous sentez l'air frais sur votre visage, le paysage est vert, il ya de nombreux chevaux sauvages... quelques bouquetins des plaines egalement.\n");
	}

	while(destination != 1 && destination != 2){
		printf("Eh la ! tu me prends pour un taxi salopiaud ? J'vais pas la bas moi!");
	
	}



}