#ifndef CONFIG_H
#define CONFIG_H

#define TOTAL_EDGE_NUM 6    // gateway=1 , edges=5

/* device configuration */
#define GATAWAY_PUBLIC_ADDR "10.11.61.180"
#define GATEWAY_LOCAL_ADDR "192.168.2.1"
#define EDGE_ADDR_LIST    {"192.168.2.2", "192.168.2.3", "192.168.2.4", "192.168.2.5", "192.168.2.6"}
#define MAX_EDGE_NUM 5


/* status configuration */
#define MAX_MESSAGE_SIZE 128

#endif