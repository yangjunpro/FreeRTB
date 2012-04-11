#ifndef __GEO_INFO_H__
#define __GEO_INFO_H__

#include <string>
#include <map>

class GeoInfo {
    public:
        enum GeoKey {
            GEO_INVALID = -1,
            GEO_COUNTRY,
            GEO_STATE,
            GEO_ZIP,
            GEO_UNKNOWN
        };
        enum ConnectionType {
            CONN_INVALID = -1,
            CONN_TYPE_DIALUP,
            CONN_TYPE_BROADBAND, 
            CONN_TYPE_CABLE, 
            CONN_TYPE_DSL, 
            CONN_TYPE_FIXED_WIRELESS, 
            CONN_TYPE_MOBILE_WIRELESS, 
            CONN_TYPE_ISDN, 
            CONN_TYPE_CONSUMER_SATELLITE, 
            CONN_TYPE_FRAME_RELAY, 
            CONN_TYPE_OCX, 
            CONN_TYPE_TX,
            CONN_TYPE_UNKNOWN_HIGH,
            CONN_TYPE_UNKNOWN_MEDIUM,
            CONN_TYPE_UNKNOWN_LOW,
            CONN_TYPE_UNKNOWN,
        };
        enum ConnectionSpeed {
            CONN_SPEED_INVALID = -1,
            CONN_SPEED_UNKNOWN,
            CONN_SPEED_LOW,
            CONN_SPEED_MEDIUM,
            CONN_SPEED_HIGH
        };

        class LocationInfo {
            private:
                uint32_t locId_;
                std::string desc_;
        };
    private:
        std::string ip_;
        std::string domain_;    // .Yahoo.com or .google.com
        std::string ipCarrier_; // ChinaUnicon or TeleComm
        std::string isp_;
        std::map< GeoKey, LocationInfo > locationInfo_;
        ConnectionType connType_;
        ConnectionSpeed connSpeed_;
        uint32_t continentId_;  // -1 means unknown
};
#endif //__GEO_INFO_H__
