#include "pokemon.h"
#include <string.h>
#include <stdlib.h>

/*creates a new node and returns a pointer to that node*/
struct PokemonNode* NewPokemonNode(char* name, char* type, char* ability) {
   //create a link
   struct PokemonNode *node = (struct PokemonNode*) malloc(sizeof(struct PokemonNode));/*specify memory for the new node with the struct size*/
   if(node == NULL){
     return NULL;        /*failed to allocate memory*/
   }
   node->PokemonName = name; /*set the struct parameters*/
   node->PokemonType = type;
   node->PokemonAbility = ability;

   node->next = NULL; /*set the next pointer to null to avoid wild pointers*/

   return node;
}
/*
checks to see if name already exists in the Pokemon list.
 If it doesn’t it creates a new node and adds it to the list.
 If the Pokemon already exists it does nothing.
*/
void AddPokemonToList(struct Pokedex *pokedex,char* name,char* type,char* ability){
  if(FindPokemon(pokedex,name)==NULL){  /*check if the pokemon already exists or not*/
    struct PokemonNode *node = NewPokemonNode(name,type,ability); /*if it doesn't exist create a new node*/
    node->next = pokedex->pokemonHead;   /*set the next node as the current head node*/
    pokedex->pokemonHead = node;        /*set the current node as the head of the list*/

  }

}
/*
searches the Pokemon list for name. If it finds name it returns a pointer to the name’s node
 otherwise it returns NULL.
*/
struct PokemonNode* FindPokemon(struct Pokedex *pokedex,char* name) {

   struct PokemonNode* currentNode = pokedex->pokemonHead; /*node starting from the first node*/

   if(pokedex->pokemonHead == NULL) {/*if the list is empty*/
      return NULL;
   }

   while(strcmp(name,currentNode->PokemonName) !=0) { /*check if the current node name = the search name*/

      if(currentNode->next == NULL) {/*if we reached the last node then the player name is NOT found*/
         return NULL;/*return NULL if not found*/
      } else {
         currentNode = currentNode->next;/*go to the next node if not found*/
      }
   }

   return currentNode;  /*return the node if found*/
}
