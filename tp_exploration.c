#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//structures
	struct generatePlace {
		char nom [30];
		char description [200];
		int diff	;
		int id [3];
	};
	
	typedef struct generatePlace place ;

//fonctions
	void selectPlace ( char destination [30], place lieu1, place lieu2, place lieu3   ){
		
			while (strcmp(destination, lieu1.nom) != 0 && strcmp (destination, lieu2.nom) != 0 && strcmp (destination, lieu3.nom) != 0){
				printf("Eh la ! tu me prends pour un taxi salopiaud ? J'vais pas la bas moi!\n");
				scanf("%s", &destination);
			}
			
			if(strcmp( destination,  lieu1.nom) == 0){
				printf("Tres bien, montez a l'arriere et nous partirons.\n");
				printf("%s\n ", lieu1.description);
			}

			if(strcmp( destination,  lieu2.nom) == 0){
				printf("Tres bien, montez a l'arriere et nous partirons.\n");	
				printf("%s\n ", lieu2.description);	
			}
			
			if(strcmp( destination,  lieu3.nom) == 0){
				printf("Tres bien, montez a l'arriere et nous partirons.\n");
				printf("%s\n  ", lieu3.description);
			}

				
	};


//début
int main () {
	
	//variables
	char destination [30];
	
	//lieux
	place lieu1 = {"Desert"," Apres un long chemin dans la cariole, vous ne voyez plus que du sable a perte d'horizon, du sable ? Non des cendres... ",4,{1,3}};
	place lieu2 = {"Plaines"," Apres un long chemin dans la cariole, vous sentez le vent fouetter votre visage, le paysage est vert, il ya de nombreux chevaux sauvages... quelques bouquetins des plaines egalement.",3,{2,3}};
	place lieu3 = {"montagnes","Tres bien, montez a l'arriere et nous partirons.\n Apres un long chemin dans la cariole la route se fait plus abrupte, des bouquetins gambadent dans les montagnes, l'air se fait plus frais... ",7,{3,3}};
	
	//choix destination
	printf ("Bonjour aventurier, vous souhaitez allez dans le desert du nord ? ou dans les plaines du sud ?\n");
	scanf("%s", &destination);
	
	selectPlace ( destination, lieu1, lieu2, lieu3);
	
	


	return 0;
}