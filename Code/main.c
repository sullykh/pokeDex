#include <stdio.h>


#include "pokedex.h"
#include "pokedex.c"
#include "player.c"
#include "player.h"
#include "pokemon.c"
#include "pokemon.h"
#include "structs.h"


int main()
{
  /*creating object for pokedex lists*/
  struct Pokedex pokedex  = {NULL,NULL};
  /*adding pokemon items*/
  AddPokemonToList(&pokedex,(char*)"Bulbasur",(char*)"Grass",(char*)"Overgrow");
  AddPokemonToList(&pokedex,(char*)"Charmander",(char*)"Fog",(char*)"Blaze");
  AddPokemonToList(&pokedex,(char*)"Squrtle",(char*)"Water",(char*)"Torrent");
  AddPokemonToList(&pokedex,(char*)"Butterfree",(char*)"Bug",(char*)"Compound eyes");
  AddPokemonToList(&pokedex,(char*)"Pikipek",(char*)"Normal",(char*)"Keen Eye");
  AddPokemonToList(&pokedex,(char*)"Venomoth",(char*)"Bug",(char*)"Shield Dust");
  AddPokemonToList(&pokedex,(char*)"Piplup",(char*)"Water",(char*)"Torrent");
  AddPokemonToList(&pokedex,(char*)"Ducklett",(char*)"Water",(char*)"Keen Eye");
  /*adding player ash*/
  AddPlayerToList(&pokedex , (char*)"Ash");
  /*adding pockemons to player ash*/
  AddPokemonToPlayer(&pokedex,(char*)"Ash",(char*)"Charmander");
  AddPokemonToPlayer(&pokedex,(char*)"Ash",(char*)"Squrtle");
  AddPokemonToPlayer(&pokedex,(char*)"Ash",(char*)"Venomoth");

  /*adding player Misty*/
  AddPlayerToList(&pokedex , (char*)"Misty");
  /*adding pockemons to player Misty*/
  AddPokemonToPlayer(&pokedex,(char*)"Misty",(char*)"Butterfree");
  AddPokemonToPlayer(&pokedex,(char*)"Misty",(char*)"Piplup");

  /*adding player Andy*/
  AddPlayerToList(&pokedex , (char*)"Andy Roo");
  /*adding pockemons to player Andy*/
  AddPokemonToPlayer(&pokedex,(char*)"Andy Roo",(char*)"Piplup");

  /*Testing pokedex APIs*/
  DisplayPokemonDetails(&pokedex,(char*)"Charmander");
  DisplayPlayerDetails(&pokedex,(char*)"Ash");
  ListPlayers(&pokedex);
  ListPokemon(&pokedex);



  return 0;
}
