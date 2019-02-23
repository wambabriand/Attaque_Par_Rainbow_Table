

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



#include "my_lib.h"

using namespace std;


int main() 
{ 
   
	int i;
	string clair,hash;
   
        ifstream fichier(data_base_claire, ios::in); 
	ofstream output(data_base, ios::out);
 
	get_time();

        if(!fichier || !output)  
        {
		cerr << "Impossible d'ouvrir le fichier !" << endl;
		return -1;
	}

	
	cout << "DEBUT DE LA CREATION DE LA BASE DE DONNE A L'HEURE: "<< endl;
	

	while( !fichier.eof() ){   

		getline(fichier, clair); 

		if(clair.length()==0) ; 

		else {
			output << clair  ;
			//cout << clair << "  " ;

			for(i=0; i <=P ; i++){
				hash = sha256(clair);
				clair = reduce_hash_to_pass(hash, i);	

				//if(i==9)
				//cout << hash <<endl;				
			}
			

			output << " "  << hash  <<endl;
		}
	}


	cout << "FIN DE LA CREATION DE LA BASE DE DONNE " <<endl;

	get_time();

        fichier.close();
	output.close();

    	return 0;
}


