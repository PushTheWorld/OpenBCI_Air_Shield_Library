# My makefile
LIBARAIES_DIR = $(HOME)/Documents/Arduino/libraries
SKETCH = $(LIBARAIES_DIR)/OpenBCI_Wifi/examples/DefaultBoard/DefaultBoard.ino
OPENBCI_WIFI_DIR = $(LIBARAIES_DIR)/OpenBCI_Wifi

UPLOAD_PORT = /dev/cu.usbserial-A104JV88
ESP_ROOT = $(HOME)/esp8266
ESP_LIBS = $(ESP_ROOT)/libraries

BOARD = openbci

LIBS = $(LIBARAIES_DIR)/OpenBCI_Wifi $(ESP_LIBS)/Wire $(ESP_LIBS)/ESP8266WiFi  $(ESP_LIBS)/DNSServer $(ESP_LIBS)/ESP8266SSDP $(ESP_LIBS)/ESP8266WebServer $(LIBARAIES_DIR)/WiFiManager $(ESP_LIBS)/SPISlave $(LIBARAIES_DIR)/ArduinoJson $(ESP_LIBS)/ESP8266mDNS $(ESP_LIBS)/ESP8266HTTPUpdateServer $(ESP_LIBS)/ArduinoOTA $(LIBARAIES_DIR)/PubSubClient $(LIBARAIES_DIR)/WebSockets $(ESP_LIBS)/Hash

EXCLUDE_DIRS = $(LIBARAIES_DIR)/ArduinoJson/test $(LIBARAIES_DIR)/ArduinoJson/third-party $(LIBARAIES_DIR)/ArduinoJson/fuzzing $(LIBARAIES_DIR)/WebSockets/examples $(LIBARAIES_DIR)/PubSubClient/tests $(LIBARAIES_DIR)/OpenBCI_Wifi/test $(LIBARAIES_DIR)/OpenBCI_Wifi/tests-ptw-assert $(LIBARAIES_DIR)/OpenBCI_Wifi/extras

include $(HOME)/makeEspArduino/makeEspArduino.mk
