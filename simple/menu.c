#include<stdio.h>
int main () {
int n;	

printf(" \n \t\t \t bienvenue monsieur , veuilez selectionner un choix s'il vous plait");	
do{

		
printf(" \n choix : 1: nrawah lel dar");
printf(" \n choix : 2:nkamel na9ra");
printf(" \n choix : 3:nemchi nalab");
printf("\n choix : 4:nsouheb tofla bac math t9arini");
printf(" \n choix : 0 nemchi namel courda ");
scanf("%d",&n);



switch (n) 
{
	case 1 :
	printf("\n taadi ds jem3tin oukhrin w omek tsaye9 ma tnajemch ta9ra");	
	break;
	
	case 2 : 
	printf("\n tjib notet behya sahit :) ");
	break;
	
	case 4:
	printf(" \ntjib note behya fi algebre ama ken tsayebha mekch rajel w saheb masaleh ");	
	break;
	
	case 3 :
	printf("\n eli 9raw metou w dazou khouh tah fi chorba talab khir");	
	break;
}
}while (n>0);

	
	
	
}








