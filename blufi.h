#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"

#include "esp_gap_ble_api.h"
#include "esp_blufi_api.h"

#define BLUFI_TAG "BLUFI"
#define BLUFI_INFO(fmt, ...)   ESP_LOGI(BLUFI_TAG, fmt, ##__VA_ARGS__) 
#define BLUFI_ERROR(fmt, ...)  ESP_LOGE(BLUFI_TAG, fmt, ##__VA_ARGS__) 

class Blufi{
    public:
        static void init();
    private:
        static void gap_event_handler(esp_gap_ble_cb_event_t event, esp_ble_gap_cb_param_t *param);
        static void event_callback(esp_blufi_cb_event_t event, esp_blufi_cb_param_t *param);
        static uint8_t serviceUuid128[32];
        static EventGroupHandle_t wifi_event_group;
        static const int CONNECTED_BIT;
        static bool gl_sta_connected;
        static bool ble_is_connected;
        static uint8_t gl_sta_bssid[6];
        static uint8_t gl_sta_ssid[32];
        static int gl_sta_ssid_len;
        static uint8_t server_if;
        static uint16_t conn_id;
        static esp_ble_adv_data_t advData;
        static esp_ble_adv_params_t advParams;
        static esp_blufi_callbacks_t callbacks;
};