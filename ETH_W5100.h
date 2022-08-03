/*
 * ETH_W5100.h
 *
 *  Created on: 18 jul. 2022
 *      Author: mggarcia
 */

//#ifndef ETH_W5100_H_
//#define ETH_W5100_H_
#include "main.h"

// ****** Begin COMMON Registers Address ****** //
enum
{
 MR				=   0x000,	//Mode
 GAR			=   0x001,	//Gateway address
 SUBR			=   0x005,	//Subnet mask
 SHAR			=   0x009,	//Source hardware address
 SIPR			=   0x00F,	//Source IP address
 IR				=   0x015,	//Interrupt
 IMR			=   0x016,	//Interrupt Mask
 RTR			=   0x017,	//Retry time
 RCR			=   0x019,	//Retry count
 RMSR	 		=   0x01A,	//RX Memory size
 TMSR 			=   0x01B,	//TX Memory size
 PAT 			=   0x01C,	//Authentication type in PPPoE
 PPP_PTIMER		=   0x028,	//PPP LCP Request timer
 PPP_PMAGIC		=   0x029,	//PPP LCP ]Magic number
 UIPR			=   0x02A,	//Unreachable IP
 UPORT			=   0x02E,	//Unreachable PORT

 GAR_ADDR_BASEH 		=	0x00,
 GAR_ADDR_BASEL   	 	=	0x01,
 SUBR_ADDR_BASEH 		=	0x00,
 SUBR_ADDR_BASEL   	 	=	0x05,
 SHAR_ADDR_BASEH 		=	0x00,
 SHAR_ADDR_BASEL   	 	=	0x09,
 SIPR_ADDR_BASEH 		=	0x00,
 SIPR_ADDR_BASEL   	 	=	0x0F,
 IR_ADDR_BASEH 		    =	0x00,
 IR_ADDR_BASEL   	 	=	0x15,
 IMR_ADDR_BASEH 		=	0x00,
 IMR_ADDR_BASEL   	 	=	0x16,
 RMSR_ADDR_BASEH 		=	0x00,
 RMSR_ADDR_BASEL   	 	=	0x1A,
 TMSR_ADDR_BASEH 		=	0x00,
 TMSR_ADDR_BASEL   	 	=	0x1B,
};
// ****** End COMMON Registers Address ****** //

// ****** Begin SOCKET Registers Address ****** //
enum
{

 S0_MR			=   0x400,	//Mode
 S0_CR			=   0x401,	//Command
 S0_IR			=   0x402,	//Interrupt
 S0_SR			=   0x403,	//Status
 S0_PORT		=   0x404,	//Source Port
 S0_DHAR		=   0x406,	//Destiantion Address
 S0_DIPR		=   0x40C,	//Destination IP Address
 S0_DPORT		=   0x410,	//Destination Port
 S0_MSSR		=   0x412,	//Maximum segment size
 S0_PROT	 	=   0x414,	//Socket 0 in IP RAW Mode
 S0_TOS 		=   0x415,	//Socket 0 TOS
 S0_TTL 		=   0x416,	//Socket 0 TTL
 S0_TX_FSR		=   0x420,	//Socket 0 TX Free size
 S0_TX_RD		=   0x422,	//Socket 0 TX Read pointer
 S0_TX_WR		=   0x424,	//Socket 0 TX Write pointer
 S0_RX_RSR		=   0x426,	//Socket 0 RX Received size
 S0_RX_RD0      =   0x428,  //Socket 0 RX Read pointer

 S1_MR			=   0x500,	//Mode
 S1_CR			=   0x501,	//Command
 S1_IR			=   0x502,	//Interrupt
 S1_SR			=   0x503,	//Status
 S1_PORT		=   0x504,	//Source Port
 S1_DHAR		=   0x506,	//Destiantion Address
 S1_DIPR		=   0x50C,	//Destination IP Address
 S1_DPORT		=   0x510,	//Destination Port
 S1_MSSR		=   0x512,	//Maximum segment size
 S1_PROT	 	=   0x514,	//Socket 1 in IP RAW Mode
 S1_TOS 		=   0x515,	//Socket 1 TOS
 S1_TTL 		=   0x516,	//Socket 1 TTL
 S1_TX_FSR		=   0x520,	//Socket 1 TX Free size
 S1_TX_RD		=   0x522,	//Socket 1 TX Read pointer
 S1_TX_WR		=   0x524,	//Socket 1 TX Write pointer
 S1_RX_RSR		=   0x526,	//Socket 1 RX Received size
 S1_RX_RD0      =   0x528,  //Socket 1 RX Read pointer

 S2_MR			=   0x600,	//Mode
 S2_CR			=   0x601,	//Command
 S2_IR			=   0x602,	//Interrupt
 S2_SR			=   0x603,	//Status
 S2_PORT		=   0x604,	//Source Port
 S2_DHAR		=   0x606,	//Destiantion Address
 S2_DIPR		=   0x60C,	//Destination IP Address
 S2_DPORT		=   0x610,	//Destination Port
 S2_MSSR		=   0x612,	//Maximum segment size
 S2_PROT	 	=   0x614,	//Socket 2 in IP RAW Mode
 S2_TOS 		=   0x615,	//Socket 2 TOS
 S2_TTL 		=   0x616,	//Socket 2 TTL
 S2_TX_FSR		=   0x620,	//Socket 2 TX Free size
 S2_TX_RD		=   0x622,	//Socket 2 TX Read pointer
 S2_TX_WR		=   0x624,	//Socket 2 TX Write pointer
 S2_RX_RSR		=   0x626,	//Socket 2 RX Received size
 S2_RX_RD0      =   0x628,  //Socket 2 RX Read pointer

 S3_MR			=   0x700,	//Mode
 S3_CR			=   0x701,	//Command
 S3_IR			=   0x702,	//Interrupt
 S3_SR			=   0x703,	//Status
 S3_PORT		=   0x704,	//Source Port
 S3_DHAR		=   0x706,	//Destiantion Address
 S3_DIPR		=   0x70C,	//Destination IP Address
 S3_DPORT		=   0x710,	//Destination Port
 S3_MSSR		=   0x712,	//Maximum segment size
 S3_PROT	 	=   0x714,	//Socket 3 in IP RAW Mode
 S3_TOS 		=   0x715,	//Socket 3 TOS
 S3_TTL 		=   0x716,	//Socket 3 TTL
 S3_TX_FSR		=   0x720,	//Socket 3 TX Free size
 S3_TX_RD		=   0x722,	//Socket 3 TX Read pointer
 S3_TX_WR		=   0x724,	//Socket 3 TX Write pointer
 S3_RX_RSR		=   0x726,	//Socket 3 RX Received size
 S3_RX_RD0      =   0x728,  //Socket 3 RX Read pointer


 S0_MR_ADDR_BASEH 		=	0x04,
 S0_MR_ADDR_BASEL   	=	0x00,
 S0_CR_ADDR_BASEH 		=	0x04,
 S0_CR_ADDR_BASEL   	=	0x01,
 S0_IR_ADDR_BASEH 		=	0x04,
 S0_IR_ADDR_BASEL   	=	0x02,
 S0_SR_ADDR_BASEH 		=	0x04,
 S0_SR_ADDR_BASEL   	=	0x03,
 S0_PORT_ADDR_BASEHH 	=	0x04,
 S0_PORT_ADDR_BASEHL   	=	0x05,
 S0_PORT_ADDR_BASELH 	=	0x04,
 S0_PORT_ADDR_BASELL  	=	0x04,

 S0_RX_SZ_ADDR_BASEHH 	=	0x04,
 S0_RX_SZ_ADDR_BASEHL  	=	0x26,
 S0_RX_SZ_ADDR_BASELH 	=	0x04,
 S0_RX_SZ_ADDR_BASELL  	=	0x27,

 S0_RX_RD_ADDR_BASEHH 	=	0x04, //S0_RX_RD0H
 S0_RX_RD_ADDR_BASEHL  	=	0x28, //S0_RX_RD0L
 S0_RX_RD_ADDR_BASELH 	=	0x04, //S0_RX_RD1H
 S0_RX_RD_ADDR_BASELL  	=	0x29 //S0_RX_RD1L

};
// ****** End SOCKET0  Registers Address ****** //

// ****** Begin Socket COMMANDS Sn_CR ****** //
enum
{
 OPEN 			=	0x01,
 LISTEN 		=	0x02,
 CONNECT 		=	0x04,
 DISCON  		=	0x08,
 CLOSE 			=	0x10,
 SEND 			=	0x20,
 SEND_MAC		=	0x21,
 SEND_KEEP  	=	0x22,
 RECV 			=	0x40
};

// ****** end Socket COMMANDS Sn_CR ****** //

// ****** Begin Socket STATUS Sn_SR ****** //
enum
{
 SOCK_CLOSED 		=	0x00,
 SOCK_ARP   	 	=	0x01,
 SOCK_INIT			=	0x13,
 SOCK_LISTEN		=	0x14,
 SOCK_SYNSENT 		=	0x15,
 SOCK_SYNRECV		=	0x16,
 SOCK_ESTABLISHED	=	0x17,
 SOCK_FIN_WAIT		=	0x18,
 SOCK_CLOSING  		=	0x1A,
 SOCK_TIME_WAIT		=	0x1B,
 SOCK_CLOSE_WAIT	=	0x1C,
 SOCK_LAST_ACK		=	0x1D,
 SOCK_UDP			=	0x22,
 SOCK_IPRAW			=	0x32,
 SOCK_MACRAW		=	0x42,
 SOCK_PPOE			=	0x5F,
};
// ****** End Socket STATUS Sn_SR ****** //

// Begin Socket SPI
enum
{
 SPI_WRITE			=	0xF0,
 SPI_READ   	 	=	0x0F,
};

struct W5100_SPI
{
	SPI_HandleTypeDef *SPI;
	GPIO_TypeDef  *PORT;
	uint16_t PIN;
	uint8_t operacion;
	char TX[4];
	char RX[4];
	char data[2048];
};


// End Socket SPI
/****************************************************************************
 * Función para el comunicación SPI.
 ****************************************************************************/
void setVar_ETH(void);
uint8_t SPI_ETH(struct W5100_SPI *);
uint16_t SPI_ETH_REG(struct W5100_SPI *, uint8_t ,uint8_t ,uint8_t , uint8_t * , uint8_t );
uint16_t SPI_ETH_WR_REG_16(struct W5100_SPI * , uint16_t , uint8_t , uint16_t );
uint16_t SPI_ETH_RD_REG_16(struct W5100_SPI * , uint16_t , uint8_t , uint8_t * , uint16_t);
uint16_t SPI_ETH_RD_RCV_REG_16(struct W5100_SPI * , uint16_t , uint8_t , uint8_t * , uint16_t, uint16_t);
uint8_t SPI_ETH_PORT_CMD(struct W5100_SPI *, uint8_t);

//#endif /* ETH_W5100_H_ */
