/**
* This file is autogenerated by nRFgo Studio 1.17.1.3252
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h"
#include "aci.h"


#define SETUP_ID 0
#define SETUP_FORMAT 3 /** nRF8001 D */
#define ACI_DYNAMIC_DATA_SIZE 185

/* Service: Gap - Characteristic: Device name - Pipe: SET */
#define PIPE_GAP_DEVICE_NAME_SET          1
#define PIPE_GAP_DEVICE_NAME_SET_MAX_SIZE 8

/* Service: Meteo Station - Characteristic: Thermostat Temperatur - Pipe: RX */
#define PIPE_METEO_STATION_THERMOSTAT_TEMPERATUR_RX          2
#define PIPE_METEO_STATION_THERMOSTAT_TEMPERATUR_RX_MAX_SIZE 20

/* Service: Meteo Station - Characteristic: Temperature Measurement - Pipe: TX_ACK */
#define PIPE_METEO_STATION_TEMPERATURE_MEASUREMENT_TX_ACK          3
#define PIPE_METEO_STATION_TEMPERATURE_MEASUREMENT_TX_ACK_MAX_SIZE 13

/* Service: Meteo Station - Characteristic: Humidity Measurement - Pipe: TX_ACK */
#define PIPE_METEO_STATION_HUMIDITY_MEASUREMENT_TX_ACK          4
#define PIPE_METEO_STATION_HUMIDITY_MEASUREMENT_TX_ACK_MAX_SIZE 2

/* Service: Meteo Station - Characteristic: Pressure Measurement - Pipe: TX_ACK */
#define PIPE_METEO_STATION_PRESSURE_MEASUREMENT_TX_ACK          5
#define PIPE_METEO_STATION_PRESSURE_MEASUREMENT_TX_ACK_MAX_SIZE 4


#define NUMBER_OF_PIPES 5

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
  {ACI_STORE_LOCAL, ACI_TX_ACK},   \
}

#define GAP_PPCP_MAX_CONN_INT 0xffff /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0xffff /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0xffff /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 36
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x42,0x07,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x05,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x09,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x14,0x03,0x90,0x02,0xff,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0xff,0xff,0x02,0x58,0x05,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x0e,0x03,0x00,0x00,0x2a,0x04,0x14,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x08,0x00,0x03,0x2a,0x00,0x01,0x49,0x6f,0x54,0x4d,0x65,0x74,0x65,0x6f,0x04,0x04,\
            0x05,0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x06,0x04,0x03,0x02,0x00,0x05,0x2a,0x01,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,\
            0x06,0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x08,0x00,0x07,0x2a,0x04,0x01,0xff,0xff,0xff,0xff,0x00,0x00,0xff,0xff,0x04,0x04,\
            0x02,0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x02,0x00,0x09,0x28,0x00,0x01,0x0a,0x18,0x04,0x04,0x05,0x05,0x00,0x0a,0x28,0x03,\
            0x01,0x02,0x0b,0x00,0x29,0x2a,0x06,0x04,0x15,0x14,0x00,0x0b,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x2a,0x29,0x01,0x4e,0x6f,0x72,0x64,0x69,0x63,0x53,0x65,0x6d,0x69,0x63,0x6f,0x6e,\
            0x64,0x75,0x63,0x74,0x6f,0x72,0x00,0x06,0x04,0x08,0x07,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x0c,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,\
            0x0d,0x28,0x03,0x01,0x02,0x0e,0x00,0x26,0x2a,0x06,0x04,0x05,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x04,0x00,0x0e,0x2a,0x26,0x01,0x30,0x31,0x2e,0x31,0x06,0x04,0x08,0x07,0x00,0x0f,\
            0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0x05,0x05,0x00,0x10,0x28,0x03,0x01,0x02,0x11,0x00,0x25,0x2a,0x06,0x04,0x05,0x04,\
            0x00,0x11,0x2a,0x25,0x01,0x31,0x35,0x38,0x37,0x06,0x04,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0x07,0x00,0x12,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,0x05,\
            0x05,0x00,0x13,0x28,0x03,0x01,0x02,0x14,0x00,0x23,0x2a,0x06,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x04,0x09,0x08,0x00,0x14,0x2a,0x23,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x04,0x04,0x05,0x05,0x00,0x15,0x28,0x03,0x01,0x02,0x16,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x27,0x2a,0x06,0x04,0x03,0x02,0x00,0x16,0x2a,0x27,0x01,0x42,0x78,0x06,0x04,0x08,\
            0x07,0x00,0x17,0x29,0x04,0x01,0x19,0x00,0x00,0x00,0x01,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x50,0x00,0x04,0x04,0x05,0x05,0x00,0x18,0x28,0x03,0x01,0x02,0x19,0x00,0x24,0x2a,0x06,\
            0x04,0x09,0x08,0x00,0x19,0x2a,0x24,0x01,0x6e,0x52,0x46,0x78,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x6c,0x78,0x78,0x78,0x78,0x06,0x04,0x08,0x07,0x00,0x1a,0x29,0x04,0x01,0x19,0x00,0x00,\
            0x00,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x1b,0x28,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x88,0x01,0x02,0x1c,0x00,0x2a,0x2a,0x06,0x04,0x07,0x06,0x00,0x1c,0x2a,0x2a,0x01,0xab,\
            0xcd,0x00,0x00,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x1d,0x28,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xa4,0x03,0x01,0x02,0x1e,0x00,0x28,0x2a,0x04,0x04,0x14,0x06,0x00,0x1e,0x2a,0x28,0x01,\
            0x52,0x65,0x76,0x31,0x2e,0x30,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x08,0x07,0x00,0x1f,0x29,0x04,\
            0x01,0x19,0x00,0x00,0x00,0x01,0x00,0x00,0x04,0x04,0x10,0x10,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xdc,0x00,0x20,0x28,0x00,0x01,0x57,0x76,0x85,0x1c,0x4e,0x30,0xc6,0x1f,0xb2,0x1d,0xa1,\
            0x52,0x09,0x18,0x0e,0x75,0x04,0x04,0x13,0x13,0x00,0x21,0x28,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xf8,0x03,0x01,0x04,0x22,0x00,0x9e,0xca,0xdc,0x24,0x0e,0xe5,0xa9,0xe0,0x93,0xf3,0xa3,\
            0xb5,0x02,0x00,0x40,0x6e,0x44,0x10,0x14,0x00,0x00,0x22,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x14,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x23,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x30,0x28,0x03,0x01,0x20,0x24,0x00,0x1c,0x2a,0x24,0x00,0x0d,0x00,0x00,0x24,0x2a,0x1c,\
            0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x4c,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x25,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x05,\
            0x05,0x00,0x26,0x28,0x03,0x01,0x20,0x27,0x00,0x6f,0x2a,0x24,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x68,0x00,0x02,0x00,0x00,0x27,0x2a,0x6f,0x01,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x28,\
            0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x29,0x28,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x84,0x03,0x01,0x20,0x2a,0x00,0x6d,0x2a,0x24,0x00,0x04,0x00,0x00,0x2a,0x2a,0x6d,0x01,\
            0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x2b,0x29,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x07,0x06,0x22,0xa0,0x01,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x2a,0x00,0x01,0x00,0x80,0x04,0x00,0x03,0x00,0x00,0x00,0x02,0x02,0x00,0x08,0x04,\
            0x00,0x22,0x00,0x00,0x2a,0x1c,0x01,0x00,0x04,0x04,0x00,0x24,\
        },\
    },\
    {0x00,\
        {\
            0x19,0x06,0x40,0x1c,0x00,0x25,0x2a,0x6f,0x01,0x00,0x04,0x04,0x00,0x27,0x00,0x28,0x2a,0x6d,0x01,0x00,\
            0x04,0x04,0x00,0x2a,0x00,0x2b,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x50,0x00,0x9e,0xca,0xdc,0x24,0x0e,0xe5,0xa9,0xe0,0x93,0xf3,0xa3,0xb5,0x00,0x00,0x40,0x6e,\
            0x57,0x76,0x85,0x1c,0x4e,0x30,0xc6,0x1f,0xb2,0x1d,0xa1,0x52,\
        },\
    },\
    {0x00,\
        {\
            0x07,0x06,0x50,0x1c,0x00,0x00,0x0e,0x75,\
        },\
    },\
    {0x00,\
        {\
            0x12,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x03,0x39,0x01,\
        },\
    },\
}

#endif
