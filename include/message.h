#ifndef MESSAGE_H
#define MESSAGE_H

#include "common.h"

void initMessageQ();
void freeMessageQ();
int isEmpty();
int isFull();
int push(struct _message message, int edge_id);
int sendMessage(struct _message *message);
int receiveMessage(struct edge_id, struct _message *message);

#endif