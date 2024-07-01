#ifndef EFFECT_H
#define EFFECT_H

#include "../structs/structs.h"
#include "../TDAs/hashmap.h"

struct HashMap;

// Incializa mapa de acciones y efectos en estadísticas
HashMap * inicializar_mapa_acciones(HashMap * mapa_acciones);

// Inicializa arreglo de objetos
void inicializar_arreglo_objetos(Item arreglo_objetos[7]);

// Definir acciones para los items
bool aplicar_efecto(char * nombre_accion, Tamagotchi *mascota, HashMap *mapa_acciones);

#endif