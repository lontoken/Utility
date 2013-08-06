#ifndef __BEARCOMMON_BEARERROR_H__
#define __BEARCOMMON_BEARERROR_H__

#include "BearTypes.h"

/*
 * socket¥ÌŒÛ¿‡–Õ
 **********************************************************/
static _bcui32 BEAR_SUCCESS = 0;

static _bcui32 BEAR_ERR_COMMON = 1;
static _bcui32 BEAR_ERR_INVALID_ARG = BEAR_ERR_COMMON + 1;

static _bcui32 BEAR_ERR_SOCKET = 1000;
static _bcui32 BEAR_ERR_CANOT_CREATE_SOCKET = BEAR_ERR_SOCKET + 1;
static _bcui32 BEAR_ERR_INVALID_SOCKET_ADDRESS = BEAR_ERR_SOCKET + 2;
static _bcui32 BEAR_ERR_INVALID_SOCKET = BEAR_ERR_SOCKET + 3;
static _bcui32 BEAR_ERR_CONNECT_ERROR = BEAR_ERR_SOCKET + 4;
static _bcui32 BEAR_ERR_SEND_ERROR = BEAR_ERR_SOCKET + 5;
static _bcui32 BEAR_ERR_RECV_ERROR = BEAR_ERR_SOCKET + 6;
static _bcui32 BEAR_ERR_CLOSE_ERROR = BEAR_ERR_SOCKET + 7;

#endif