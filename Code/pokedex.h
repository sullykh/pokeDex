#ifndef POKEDEX_H
#define POKEDEX_H

#include "pokemon.h"
#include "player.h"
#include "structs.h"

/*
•	void DisplayPokemonDetails(pokedex, name) – outputs the details of name to the screen
*/
void DisplayPokemonDetails(struct Pokedex *pokedex, char* name);
/*
•	void DisplayPlayerDetails(pokedex, name) – outputs the details of name to the screen, including a list of names of all the Pokemon owned
*/
void DisplayPlayerDetails(struct Pokedex *pokedex, char* name);
/*
•	void ListPokemon(pokedex) – outputs a list of names of all Pokemon in the Pokedex
*/
void ListPokemon(struct Pokedex *pokedex);
/*
•	void DisplayPokemonDetails(pokedex, name) – outputs the details of name to the screen
*/
void ListPlayers(struct Pokedex *pokedex);









#endif
