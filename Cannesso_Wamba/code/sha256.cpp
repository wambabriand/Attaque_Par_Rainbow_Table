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



string sha256(const string str)
{
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);
    stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++)
    {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    return ss.str();
}

