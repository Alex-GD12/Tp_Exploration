	
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//structures


//fonctions


//début
int main () {
	
	//variables
	char destination [30];
	char destination1 [30] = "Sud\0";
	char destination2 [30] = "Nord\0";
	
	
	//choix destination
	printf ("Bonjour aventurier, vous souhaitez allez dans le desert du nord ? ou dans les plaines du sud ?\n");
	
	scanf("%s", &destination);
	
	while (strcmp(destination, destination1) != 0 && strcmp (destination, destination2) != 0){
		printf("Eh la ! tu me prends pour un taxi salopiaud ? J'vais pas la bas moi!\n");
		scanf("%s", &destination);
	}
	
	if(strcmp( destination,  destination1) == 0){
		printf("Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole, vous ne voyez plus que du sable a perte d'horizon, du sable ? Non des cendres... \n");
	}

	if(strcmp( destination,  destination2) == 0){
		printf("Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole, vous sentez l'air frais sur votre visage, le paysage est vert, il ya de nombreux chevaux sauvages... quelques bouquetins des plaines egalement.\n");
	}

	


	return 0;
}

