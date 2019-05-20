#pragma once

// general
#define DIRECTION_UPLINK 0
#define DIRECTION_DOWNLINK 1

// network settings
#define DEFAULT_PROBING_URL_UPLINK    "http://129.217.211.19:6137/index.html"
#define DEFAULT_PROBING_URL_DOWNLINK  "http://129.217.211.19:6137/testfiles/100MB.bin"

#define DEFAULT_NETSYNC_PORT  4567

// probing settings
#define DEFAULT_NOF_SUBFRAMES_TO_CAPTURE 20000
#define DEFAULT_PROBING_DELAY_MS 10000
#define DEFAULT_PROBING_PAYLOAD_SIZE (5*1024*1024)
#define DEFAULT_PROBING_DIRECTION DIRECTION_UPLINK
#define DEFAULT_POLL_INTERVAL_SEC 1
#define DEFAULT_AUTO_INTERVAL_SEC 60
#define DEFAULT_TX_POWER_SAMPLING_INTERVAL_US 250000

#define DEFAULT_MIB_SEARCH_TIMEOUT_MS 1000
#define DEFAULT_PROBING_TIMEOUT_MS 10000

// eye settings
#define DEFAULT_NOF_SUBFRAMES_TO_SHOW 0
#define DEFAULT_NOF_PRB 50
#define DEFAULT_NOF_PORTS 2
#define DEFAULT_NOF_RX_ANT 1