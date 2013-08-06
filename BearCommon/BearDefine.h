#ifndef __BEARCOMMON_BEARDEFINE_H__
#define __BEARCOMMON_BEARDEFINE_H__

#define CHECK_ARG_VALIDE(T) \
    if ((T) == 0) { return BEAR_ERR_INVALID_ARG; }

#define CHECK_SOCKET_VALIDE(T) \
    if ((T) == INVALID_SOCKET) { return BEAR_ERR_INVALID_SOCKET; }

#endif