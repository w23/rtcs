#pragma once

#define MAX_PLAYERS 4
#define MAX_PLAYER_COMMANDS 4

// in ms
#define PLANCK_TIME 50

// in planck time
#define NET_LATENCY 8
#define NET_LATENCY_LOCAL 4

#define MAX_COMMANDS (MAX_PLAYERS * MAX_PLAYER_COMMANDS)

#define MAX_NET_PAYLOAD 64
#define MAX_NET_PACKETS_QUEUE 16
