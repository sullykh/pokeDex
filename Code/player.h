#ifndef PLAYER_H
#define PLAYER_H

#include "structs.h"
#include "pokemon.h"


/*creates a new node and returns a pointer to that node. The Pokemon count should be set to zero.*/
struct PlayerNode* NewPlayerNode(char* name);
/*checks to see if name already exists in the Player list.
 If it doesn’t it creates a new node and adds it to the list.
 If the player already exists it does nothing.*/
void AddPlayerToList(struct Pokedex *pokedex,char* name);
/*
  searches the Player list for name.
  If it finds name it returns a pointer to the name’s node otherwise it returns NULL.
*/
struct PlayerNode* FindPlayer(struct Pokedex *pokedex,char* name);
/*adds the Pokemon to the player’s Pokemon list (if it is not already in there)
 and increments the Pokemon count for that player.*/
void AddPokemonToPlayer(struct Pokedex *pokedex, char* l_playerName, char* l_pokemonName);


#endif
