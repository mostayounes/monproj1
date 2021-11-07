#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

int getKey(char* str)
{
    //créer un tableau pour conserver le nombre de caractères et initialiser le tableau à 0
    int count[ASCII_SIZE] = {0};
 
    // Construire un tableau de nombre de caractères
    int len = strlen(str);
    int max = 0;  
    char result;   
 
    // chercher le nombre de  caractere plus repetee
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
    //retourner la clé
    int c;
    c = result - 5; //5 est l'emplacement de la lettre e
   return c;
    
}
// decalage des lettres du texte par la cle obtenu
char* getString(char* ch){
	char Copie [500];
	char r;
	int l = strlen(ch);
	for(int i = 0; ch[i]<l; ++i){
	r = ch[i]-getKey(ch);
	Copie[i] = r;
}
    return Copie;
}

int main()
{
    char text[500];
    printf("donner votre texte!\n");
    gets(text);
    printf("La cle utilise est: %d", getKey(text));
    printf("\n Le texte est est: %c", getString(text));
    return 0;
}
