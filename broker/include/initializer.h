#ifndef INITIALIZER_H
#define INITIALIZER_H

#include "common_utils.h"
#include "handler.h"
#include "finalizer.h"
#include "dump.h"

typedef struct config_values{
    uint32_t tamano_memoria;
    uint32_t tamano_minimo_particion;
    char* algoritmo_memoria;
    char* algoritmo_reemplazo;
    char* algoritmo_particion_libre;
    char* ip_broker;
    char* puerto_broker;
    uint32_t frecuencia_compactacion;
    char* dump_file;
} config_values;

config_values cfg_values;
uint32_t listening_socket;
on_request p_on_request;
void initialize();
void fill_config_values();
t_log* create_log_from_config(char* path_key, char* name, char* show_key);
void set_sig_handler(void);

#endif