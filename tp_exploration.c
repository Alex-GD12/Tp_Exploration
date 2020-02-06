<<<<<<< Updated upstream
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//structures


//fonctions


//début
int main () {
	
	//variables
	char destination [30];
	char destination1 [30] = "Sud";
	char destination2 [30] = "Nord";
	
	
	//choix destination
	printf ("Bonjour aventurier, vous souhaitez allez dans le desert du nord (1) ? ou dans les plaines du sud (2) ?\n");
	
	scanf("%d", &destination);
	
	while(destination1 != 0 && destination2 != 0){
		printf("Eh la ! tu me prends pour un taxi salopiaud ? J'vais pas la bas moi!\n");
		scanf("%d", &destination);
	}
	
	if( destination == 1){
		printf("Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole, vous ne voyez plus que du sable a perte d'horizon, du sable ? Non des cendres... \n");
	}

	if( destination == 2){
		printf("Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole, vous sentez l'air frais sur votre visage, le paysage est vert, il ya de nombreux chevaux sauvages... quelques bouquetins des plaines egalement.\n");
	}

	



}
>>>>>>> Stashed changes
