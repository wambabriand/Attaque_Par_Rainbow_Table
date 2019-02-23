
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

using namespace std ;


//string table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" ;


void search(){



}

void get_time(){
 	std::time_t result = std::time(nullptr);
    	std::cout << std::asctime(std::localtime(&result)) << endl;
	return ;
}




string reduce_hash_to_pass(string hash , int i){

	int t ,j , index;
	string pass;
	char c;

	t = 6 + (hash.at(0) % 5) ;

	for(j = 0 ; j < t ; j++){
		index = ( (hash.at(j) + i ) % 255 ) % 62 ;
		c = table.at(index) ;
		pass.append(1,c);
	}

	return pass ;
}



int check(string hash, string file , string *result){

        ifstream fichier( file, ios::in); 
	string nom ,key;

        if(!fichier )  
        {
		cout << "Impossible d'ouvrir le fichier !  " << file << endl;
		return -1;
	}

	while( !fichier.eof() ){

		fichier >> nom  >> key; 

		if(hash.compare(key) == 0){
		        *result = nom;
			return 1 ;
		}
	}
        fichier.close();

	return 0;
}
 


string hex_to_ascii(string str){

	unsigned int i=0; 
	std::string res;
	res.reserve(str.size() / 2);
	for (i = 0; i < str.size(); i += 2)
	{
	    std::istringstream iss(str.substr(i, 2));
	    int temp;
	    iss >> std::hex >> temp;
	    res += static_cast<char>(temp);
	}
	return res;
}
 




