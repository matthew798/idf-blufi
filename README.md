# IDF BluFi
This is just a wrapper around the BluFi example provided by ESP.

All you need to do is start a BLEDevice:
```cpp
BLEDevice::init(btName);
```
Then call `Init`:
```cpp
void Blufi::init()
```

This will create a BLE endpoint on the configured device that will listen for BluFi connections.