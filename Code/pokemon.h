#ifndef POKEMON_H
#define POKEMON_H

#include "structs.h"

/*creates a new node and returns a pointer to that node*/
struct PokemonNode* FindPokemon(struct Pokedex *pokedex,char* str);
/*
checks to see if name already exists in the Pokemon list.
 If it doesn’t it creates a new node and adds it to the list.
 If the Pokemon already exists it does nothing.
*/
struct PokemonNode* NewPokemonNode(char* name, char* type, char* ability);
/*
searches the Pokemon list for name. If it finds name it returns a pointer to the name’s node
 otherwise it returns NULL.
*/
void AddPokemonToList(struct Pokedex *pokedex,char* name,char* type,char* ability);








#endif
