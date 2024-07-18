#include "MainDeployment/Top/MainDeploymentPacketsAc.hpp"

#ifndef TELEMETRY_DEFS_HPP
#define TELEMETRY_DEFS_HPP

struct TelemetryState {
    /* include any variables that are needed for 
    configuring/starting/tearing down the topology */
};
struct TopologyState {
    TelemetryState Telemetry_state;
};

namespace GlobalDefs {
    namespace PingEntries {
        namespace Telemetry_tlmSend {
            enum {
                WARN = 3,
                FATAL = 5
            };
        }
    }
}

#endif