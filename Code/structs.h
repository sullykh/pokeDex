#ifndef STRUCTS_H
#define STRUCTS_H

struct PlayerNode
{
  char* PlayerName;                   /*string for player name*/
  int pokemonCount;                   /*integer for pokemon number*/
  struct PlayerNode *next;            /*point to the next node*/
  struct PokemonNode* PokemonArray[20]; /*array of pokemon node represents the pokemons owned*/
};

struct Pokedex
{
  struct PokemonNode* pokemonHead;    /*head of pokemon list*/
  struct PlayerNode* playerHead;      /*head of players list*/
};

struct PokemonNode
{
  char* PokemonName;              /*string holds pokemon name*/
  char* PokemonType;              /*string holds pokemon type*/
  char* PokemonAbility;           /*string holds pokemon ability*/
  struct PokemonNode *next;       /*points to the next node*/
};

#endif
