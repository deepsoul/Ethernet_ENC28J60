#include "socket.h"

uint8_t socket(SOCKET s, uint8_t protocol, uint16_t port, uint8_t flag) {
}

uint8_t listen(SOCKET s) {
}

uint8_t connect(SOCKET s, uint8_t *address, uint16_t port) {
}

uint16_t send(SOCKET s, const uint8_t *buffer, uint16_t length) {
}

uint16_t recv(SOCKET s, const uint8_t *buffer, uint16_t length) {
}

uint8_t disconnect(SOCKET s) {
}

uint8_t close(SOCKET s) {
}

uint8_t getSn_SR(SOCKET s) {
    //get socket status
    //TODO: change on standard Ethernet library to do not use this
}

uint16_t getSn_RX_RSR(SOCKET s) {
    //return the size of the receive buffer for that socket
    //TODO: change on standard Ethernet library to do not use this
}

void iinchip_init() {
    //TODO: change on standard Ethernet library to do not use this
}

void sysinit(uint8_t txSize, uint8_t rxSize) {
    //TODO: change on standard Ethernet library to do not use this
}

void setSHAR(uint8_t *macAddress) {
    //TODO: change on standard Ethernet library to do not use this
}

void setSIPR(uint8_t *ipAddress) {
    //TODO: change on standard Ethernet library to do not use this
}

void setGAR(uint8_t *gatewayAddress) {
    //TODO: change on standard Ethernet library to do not use this
}

void setSUBR(uint8_t *subnetAddress) {
    //TODO: change on standard Ethernet library to do not use this
}
