
# Fait par Angelo Canesso et Briand Wamba    

#### Ce fichier sera améliorer dans le temps 


L'application est libre d'utilisation et l'utilisateur est responsable de l'usage des ressources.

Cette application contient une implémentation d'une attaque par rainbow table.

Une Rainbow Table est deja créée avec un nombre de p=1000 fonctions de réduction. Son utilisation est donc instantanée. Cependant l'application permet de crée une Rainbow Table personnalisée à partir d'une base de donnée de mot de passe à l'aide de ./create_rainbowTable.

Notre Rainbow Table se trouve dans le dossier data_base sous le nom de mot_passe_hash.txt. Github n’acceptant pas les fichiers de plus 1 MB, une version dégradée y a été uploader.
Le version de 1Gb de la rainbow table se trouve à l’adresse suivante :
https://drive.google.com/drive/folders/1SF6o6WiflKsW_xnrXt22q1EU9owsf4WS

***  Casser un mot de passe en utilisant la rainbow table existante ***

placer vous dans le dossier cannesso_wamba, ouvrir un terminal, et lancer l'application avec la commande :

./crack_sha256 hash

où hash correspond à l'empreintes ha 256 de 64 caractères, que nous voulons craquer.

********  Créer sa propre rainbow table *********

vous devez disposer d'un fichier contenant des mots de pass en claire au format .txt.

Positionnez le fichier dans le dossier base_donne 

Renommer le fichier en "mot_pass_clair" et assurez vous qu'il soit de type ".txt"

Placez-vous dans le dossier cannesso_wamba, ouvrir un terminal, et lancer l'application grace a la commande :

./create_rainbowTable

Après avoir reçu le message FIN DE LA CREATION. vous pourrez directement casser votre mot de pass en utilisant 

./crack_sha256 hash

où hash correspond à l'empreintes ha 256 de 64 caractères, que nous voulons craquer.
