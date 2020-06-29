#ifndef COMUNICACAOH
#define COMUNICACAOH

#include <stdio.h>
#include <string.h>
#include <assert.h>

#include <termios.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <sys/file.h>
#include <errno.h>


#define RS232_PORTNR  38

int inicia_comunicacao_serial();
void encerra_comunicacao_serial();
void envia_comandos_robo(unsigned char *);
int RS232_OpenComport(int, int, const char *, int);
int RS232_SendByte(int, unsigned char);
int RS232_SendBuf(int, unsigned char *, int);
void RS232_CloseComport(int);

#endif // COMUNICACAOH

