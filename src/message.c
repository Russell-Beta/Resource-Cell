#include "message.h"

struct _message *msgQ;
int front, rear;

void initMMessageQ(){
    msgQ = (struct _message *)malloc(sizeof(struct _message*));
}
void freeMessageQ(){
    free(msgQ);
}
struct _message copy_message(struct _message message){

    struct _message copy;
    copy.edge_id=message.edge_id;
	copy.sender_id=message.sender_id; 
	copy.receiver_id=message.receiver_id;
	strcpy(copy.message,message.message);

    return copy;
}