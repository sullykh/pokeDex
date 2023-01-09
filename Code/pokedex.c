#include "pokedex.h"
#include <stdio.h>


/*
•	void DisplayPokemonDetails(pokedex, name) – outputs the details of name to the screen
*/
void DisplayPokemonDetails(struct Pokedex *pokedex, char* name){
  struct PokemonNode* node = FindPokemon(pokedex,name);             /*search for the pokemon name if exists*/
  printf("Displaying %s Details",name);
  if(node!=NULL){       /*if it exists*/
    printf("\n=====================\nName:%s\nType:%s\nAbility:%s\n=====================\n",
    node->PokemonName,node->PokemonType,node->PokemonAbility);        /*print pokemon details*/
  }
}
/*
•	void DisplayPlayerDetails(pokedex, name) – outputs the details of name to the screen, including a list of names of all the Pokemon owned
*/
void DisplayPlayerDetails(struct Pokedex *pokedex, char* name){
  struct PlayerNode* node = FindPlayer(pokedex,name);       /*search for the player node if exists*/
  printf("Displaying %s Details",name);
  if(node!=NULL){     /*if it exists*/
    printf("\n=====================\nName:%s\n",node->PlayerName);      /*print player name*/
    for (int i = 0;i<node->pokemonCount;i++){       /*print the pokemon array*/
      printf("Pokemon %d:%s\n",i+1,node->PokemonArray[i]->PokemonName);
    }
    printf("=====================\n");
  }
}
/*
•	void ListPokemon(pokedex) – outputs a list of names of all Pokemon in the Pokedex
*/
void ListPokemon(struct Pokedex *pokedex){
  struct PokemonNode *node = pokedex->pokemonHead;        /*virtual node to loop through the list*/
  printf("====Pokemon Names List====\n");
  //start from the beginning
  while(node != NULL) {               /*loop through the list by the next pointer of each node*/
     printf("%s\n",node->PokemonName);  /*print the pokemon name*/
     node = node->next;
  }
  printf("=========================\n");
}
/*
•	void DisplayPokemonDetails(pokedex, name) – outputs the details of name to the screen
*/
void ListPlayers(struct Pokedex *pokedex){
  struct PlayerNode *node = pokedex->playerHead;    /*virtual node to loop through the list*/
  printf("====Player Names List====\n");
  //start from the beginning
  while(node != NULL) {       /*loop through the list by the next pointer of each node*/
     printf("%s\n",node->PlayerName);     /*print the player name*/
     node = node->next;
  }
  printf("=========================\n");
}
