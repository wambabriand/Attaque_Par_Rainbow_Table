/*
################################################
## Fait par Angelo Cannesso et Briand Wamba   ##
## Ce fichier sera optimiser avec le temps    ##
##  Il est totalement libre d'utilisation     ##
##   	Prof. Ahmed Roshenid                  ##
##   	Group Télecom Paristech  	      ##
##     bwamba@telecom-paristech.fr            ##
##    acannesso@telecom-paristech.fr          ##
################################################
*/


// 1 faire un test pour remplacer l image avec le test de l application

// 2  modifier aussi 

#include "my_lib.h"


using namespace std;



int main(int argc, char *argv[]) 
{ 
   
	int flag = 0 , i,j;
	string nom , original; 
	string hash ;
	string password;	

	if(argc!= 2){
		cout << " Erreur nombre d'arguments " << endl ;
		return -1;
	}

	password = argv[1];

    	cout << endl << endl << "DEBUT DE LA RECHERCHE DANS LA BASE DE DONNE " << data_base << endl;

	cout <<  " HEURE DE DEBUT ";
	get_time();

	flag = check(password,data_base,&original);

	for(i = P-1 ; i >=0 && flag==0; i--){

		hash = password ;

		for(j=i ; j <P ; j++){
			nom = reduce_hash_to_pass(hash,j);
			hash = sha256(nom);
		}
		
		flag = check(hash,data_base,&original);
	}

	if(flag==1){
		cout<< endl << "le mot de passe provient de : " << original << "  il a ete trouve a la transformation " << i+1 << endl<< endl ;
		for(j=0 ; j<=i; j++){
			hash = sha256(original);
			original = reduce_hash_to_pass(hash,j);
		}
		cout  <<"le mot de passe en claire est : " << original <<" " << sha256(original) << endl ;
	}

	if(flag==0){
		cout << endl << "le mot de passe n existe pas dans notre base de donnée " << endl;
	}


    cout  << endl << "HEURE DE FIN  "; 	get_time();

    cout  << endl << "FIN DE LA RECHERCHE A  "; 

    cout  << "MERCI D AVOIR UTILISE NOTRE APP !!!" << endl<< endl;

    return 0;
}



