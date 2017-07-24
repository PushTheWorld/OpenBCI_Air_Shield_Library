/**
* Name: OpenBCI_Wifi_Definitions.h
* Date: 8/30/2016
* Purpose: This is the header file for the OpenBCI wifi definitions.
*
* Author: Push The World LLC (AJ Keller)
*/

#ifndef __OpenBCI_Wifi_Definitions__
#define __OpenBCI_Wifi_Definitions__

#define ADS1299_VREF 4.5
#define MCP3912_VREF 1.2
#define ADC_24BIT_RES 8388607.0
#define ADC_24BIT_MAX_VAL_NANO_VOLT 8388607000000000.0
#define BYTES_PER_SPI_PACKET 32
#define BYTES_PER_OBCI_PACKET 33
#define DEBUG 1
#define MAX_SRV_CLIENTS 2
#define BYTES_PER_CHANNEL 3
// #define NUM_PACKETS_IN_RING_BUFFER 45
#define NUM_PACKETS_IN_RING_BUFFER 50
#define NUM_PACKETS_IN_RING_BUFFER_JSON 50
// #define MAX_PACKETS_PER_SEND_TCP 20
#define MAX_PACKETS_PER_SEND_TCP 25
#define WIFI_SPI_MSG_LAST 0x01
#define WIFI_SPI_MSG_MULTI 0x02
#define WIFI_SPI_MSG_GAINS 0x03
#define MAX_CHANNELS 16
#define MAX_CHANNELS_PER_PACKET 8
#define NUM_CHANNELS_CYTON 8
#define NUM_CHANNELS_CYTON_DAISY 16
#define NUM_CHANNELS_GANGLION 4
// #define bit(b) (1UL << (b)) // Taken directly from Arduino.h
// Arduino JSON needs bytes for duplication
// to recalculate visit:
//   https://bblanchon.github.io/ArduinoJson/assistant/index.html
#define ARDUINOJSON_USE_DOUBLE 1
#define ARDUINOJSON_USE_LONG_LONG 1
#define ARDUINOJSON_ADDITIONAL_BYTES_4_CHAN 115
#define ARDUINOJSON_ADDITIONAL_BYTES_8_CHAN 195
#define ARDUINOJSON_ADDITIONAL_BYTES_16_CHAN 355
#define ARDUINOJSON_ADDITIONAL_BYTES_24_CHAN 515
#define ARDUINOJSON_ADDITIONAL_BYTES_32_CHAN 675
#define MICROS_IN_SECONDS 1000000
#define SPI_MASTER_POLL_TIMEOUT_MS 100
#define SPI_TIMEOUT_CLIENT_RESPONSE 400
#define SPI_NO_MASTER 401
#define CLIENT_RESPONSE_NO_BODY_IN_POST 402
#define CLIENT_RESPONSE_MISSING_REQUIRED_CMD 403
#define NANO_VOLTS_IN_VOLTS 1000000000.0

#define ADS_GAIN_1 1
#define ADS_GAIN_2 2
#define ADS_GAIN_4 4
#define ADS_GAIN_6 6
#define ADS_GAIN_8 8
#define ADS_GAIN_12 12
#define ADS_GAIN_24 24

#define ADS_SCALE_FACTOR_VOLTS_1 0.000000536441867
#define ADS_SCALE_FACTOR_VOLTS_2 0.000000268220934
#define ADS_SCALE_FACTOR_VOLTS_4 0.000000134110467
#define ADS_SCALE_FACTOR_VOLTS_6 0.000000089406978
#define ADS_SCALE_FACTOR_VOLTS_8 0.000000067055233
#define ADS_SCALE_FACTOR_VOLTS_12 0.000000044703489
#define ADS_SCALE_FACTOR_VOLTS_24 0.000000022351744

#define MCP_SCALE_FACTOR_VOLTS 0.00000000186995

#define BOARD_TYPE_CYTON "cyton"
#define BOARD_TYPE_DAISY "daisy"
#define BOARD_TYPE_GANGLION "ganglion"
#define BOARD_TYPE_NONE "none"

#define JSON_BOARD_CONNECTED "board_connected"
#define JSON_BOARD_TYPE "board_type"
#define JSON_COMMAND "command"
#define JSON_CONNECTED "connected"
#define JSON_GAINS "gains"
#define JSON_HEAP "heap"
#define JSON_LATENCY "latency"
#define JSON_MAC "mac"
#define JSON_MQTT_BROKER_ADDR "broker_address"
#define JSON_MQTT_PASSWORD "password"
#define JSON_MQTT_USERNAME "username"
#define JSON_NAME "name"
#define JSON_NUM_CHANNELS "num_channels"
#define JSON_TCP_DELIMITER "delimiter"
#define JSON_TCP_IP "ip"
#define JSON_TCP_OUTPUT "output"
#define JSON_TCP_PORT "port"

#endif
