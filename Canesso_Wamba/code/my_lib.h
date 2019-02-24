/*
################################################
## Fait par Angelo Canesso et Briand Wamba   ##
## Ce fichier sera améliorer dans le temps    ##
##  Il est totalement libre d'utilisation     ##
################################################
*/



#ifndef MY_LIB_H 
#define MY_LIB_H

#include <openssl/sha.h>
#include <string> 
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <ctime>
 
using namespace std ;

string sha256(const string str);

static const string table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" ;

//string password ;//= "10b6b5f111370d08576ab2aab8e5d43b8b589ae61765cd0813380549bc84ba85";
						      // ici tu mets le hash que tu veux craquer (il faut remplacer sha256(DD965B5) par le hash que tu auras sniffer sur le reseau )
						      // il faut etre sur que l application utilise le chiffrement sha256. pour cela tu peux utiliser cree un compte et utiliser angelo comme mot de pass.  
						      // tu sniff ton propore mot de pass et tu essaye de le craquer avec ce programme si , tu reussi alors tu es sur que l application utilise sha256

static const string data_base="data_base/mot_pass_hash.txt" ;   // tu modifie aussi le path (base_donne)  /media/bwamba/A/Cannesso_Wamba/

static const string data_base_claire="data_base/mot_pass_clair.txt" ; // tu le mets le path(nom) de ta base de donnée en clair   /media/bwamba/A/Cannesso_Wamba/

void get_time();

string hex_to_ascii(string str);

string reduce_hash_to_pass(string hash , int i);

int check(string hash, string file , string *result);

static const int P = 1000;


#endif


