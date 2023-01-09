#include "player.h"
#include <string.h>
#include <stdlib.h>

/*creates a new node and returns a pointer to that node. The Pokemon count should be set to zero.*/
struct PlayerNode* NewPlayerNode(char* name) {
  struct PlayerNode *node = (struct PlayerNode*) malloc(sizeof(struct PlayerNode));   /*specify memory for the new node with the struct size*/
  if(node == NULL){
    return NULL;        /*failed to allocate memory*/
  }
  node->PlayerName = name;    /*set the struct parameters*/
  node->pokemonCount = 0;
  node->next = NULL;      /*set the next pointer to null to avoid wild pointers*/

  return node;
}
/*checks to see if name already exists in the Player list.
 If it doesn’t it creates a new node and adds it to the list.
 If the player already exists it does nothing.*/
void AddPlayerToList(struct Pokedex *pokedex,char* name){
  if(FindPlayer(pokedex,name)==NULL){             /*check if the player already exists or not*/
    struct PlayerNode *node = NewPlayerNode(name);    /*if it doesn't exist create a new node*/
    node->next = pokedex->playerHead;                /*set the next node as the current head node*/
    pokedex->playerHead = node;                 /*set the current node as the head of the list*/
  }

}
/*
  searches the Player list for name.
  If it finds name it returns a pointer to the name’s node otherwise it returns NULL.
*/
struct PlayerNode* FindPlayer(struct Pokedex *pokedex,char* name) {
   struct PlayerNode* currentNode = pokedex->playerHead;  /*node starting from the first node*/

   if(pokedex->playerHead == NULL) {      /*if the list is empty*/
      return NULL;
   }

   while(strcmp(name,currentNode->PlayerName) !=0) {        /*check if the current node name = the search name*/

      if(currentNode->next == NULL) {     /*if we reached the last node then the player name is NOT found*/
         return NULL;   /*return NULL if not found*/
      }
      else {
         currentNode = currentNode->next;     /*go to the next node*/
      }
   }

   return currentNode;        /*return the node if found*/
}

/*adds the Pokemon to the player’s Pokemon list (if it is not already in there)
 and increments the Pokemon count for that player.*/
void AddPokemonToPlayer(struct Pokedex *pokedex, char* l_playerName, char* l_pokemonName){
  struct PlayerNode* myPlayer = FindPlayer(pokedex,l_playerName);       /*search for the player if exists*/
  struct PokemonNode* myPokemon = FindPokemon(pokedex,l_pokemonName);   /*search for the pokemon if exists*/
  if(myPlayer != NULL){           /*if player exists*/
    if(myPokemon!= NULL){         /*if pokemon exists*/
      myPlayer->PokemonArray[myPlayer->pokemonCount] = myPokemon;   /*put the pokemon node to the array at last element*/
      myPlayer->pokemonCount++;     /*increment the  pokemon count*/
    }/*if pokemon found*/
  }/*if player found*/
}
