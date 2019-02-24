/*
################################################
## Fait par Angelo Canesso et Briand Wamba   ##
## Ce fichier sera améliorer dans le temps    ##
##  Il est totalement libre d'utilisation     ##
################################################
*/


#include "my_lib.h"

using namespace std;

//string table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" ;



int check(string *nom){

	string str=".'éè`*";   // tout les carracteres indesiree
	int t = str.length();
	unsigned int  p;
	for(int i = 0 ; i< t ; i++){
		p = (*nom).find(str.at(i)); //nom.find(str.at(i)) < nom.length() && nom.find(str.at(i))
		if( p >= 0 && p < (*nom).length() ){
			(*nom).insert(p,1,table.at( rand()%62));
			//return -1;
			
		}
	}
	return 1 ;
}




int main() 
{ 
   

    	
	string nom;
   	//int i ;
        ifstream input1("data_base/in.txt", ios::in);  
	//ifstream input2("/media/bwamba/A/in2.txt", ios::in); 
	//ifstream input3("/media/bwamba/A/in3.txt", ios::in); 
        ofstream output("data_base/mot_pass_clair.txt", ios::out); 


        if(input1)// && input2 && input3 && output)  
        {
		while( !input1.eof() ){

			input1 >> nom ;
			 
			if( nom.length() < 6 ){
				for(int i=0; i<4;i++){
					nom.append(1, table.at( rand()%62) );
				}
			} // nom.length() > 6 && */
			if(  nom.length() < 11 && check(&nom)==1){
				output << nom <<endl; 
				cout << nom <<endl;
			}
		}
/*
		while( !input2.eof() ){

			input2 >> nom ;
			if( nom.length() < 11 && check(nom)==1){
				output << nom <<endl;
			}
		}

		while( !input3.eof() ){

			input3 >> nom ;
			if(nom.length() < 11 && check(nom)==1 ){
				output << nom <<endl;
			}
		}
*/
                input1.close();
//                input2.close();
//                input3.close();
		output.close();
        }
        else {
		cerr << "Impossible d'ouvrir le fichier !" << endl;
	}


	cout <<endl ;
    	return 0;
}

