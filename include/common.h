#ifndef COMMON_H
#define COMMON_H

#include "config.h"


typedef struct _resource_cell{

    int cpu_power;
    int memory;
    int bandwidth;

}resource_cell;

typedef struct _computation_tissue{
    int num_cell;
    int id;
    int total_cpu_power;
    int total_memory;
    int avg_bandwidth;
    char* role; 
}computation_cell;

struct _message{
    int sender_id;
    int receiver_id;

    test;

};

typedef struct def_task{
    int layers;
    int *stride;
    int *filter;

}task;

struct _message{
    int edge_id;
	int sender_id; 
	int receiver_id;
	char message[MAX_MESSAGE_SIZE];
};

#endif