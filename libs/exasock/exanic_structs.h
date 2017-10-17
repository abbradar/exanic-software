#ifndef EXASOCK_EXANIC_STRUCTS_H
#define EXASOCK_EXANIC_STRUCTS_H

#include "kernel/api.h"
#include "kernel/consts.h"
#include "kernel/structs.h"
#include "override.h"
#include "lock.h"
#include "rwlock.h"
#include "structs.h"
#include "exanic.h"
#include "checksum.h"
#include "ether.h"
#include "ip.h"
#include "udp.h"
#include "tcp_buffer.h"
#include "tcp.h"
#include "sys.h"
#include "dst.h"
#include "udp_queue.h"
#include "notify.h"

struct exanic_udp
{
    struct exa_eth_tx eth;
    struct exa_ip_tx ip;
    struct exa_udp_tx udp;
    struct exa_dst dst;

    struct exanic_ip *exanic_ctx;
};

struct exanic_tcp
{
    struct exa_eth_tx eth;
    struct exa_ip_tx ip;
    struct exa_tcp_conn tcp;
    struct exa_dst dst;

    struct exanic_ip *exanic_ctx;
    struct exanic_tcp *next;
};

#endif /* EXASOCK_EXANIC_STRUCTS_H */
