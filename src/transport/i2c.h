#ifndef INC_DEV_I2C
#define INC_DEV_I2C

#ifdef __cplusplus
extern "C" {
#endif

#include "core/actor.h"
#include <libopencm3/stm32/i2c.h>

/* Start of autogenerated OD types */
/* 0x6260: Transport I2C 1
   Serial protocol */
typedef struct transport_i2c_properties {
    uint8_t parameter_count;
    uint8_t dma_rx_unit;
    uint8_t dma_rx_stream;
    uint8_t dma_rx_channel;
    uint8_t dma_rx_buffer_size;
    uint8_t dma_tx_unit;
    uint8_t dma_tx_stream;
    uint8_t dma_tx_channel;
    uint32_t baudrate;
    uint8_t databits;
    uint8_t phase;
} transport_i2c_properties_t;
/* End of autogenerated OD types */

struct transport_i2c{
    actor_t *actor;
    transport_i2c_properties_t *properties;
    uint32_t clock;
    uint32_t address;
    uint32_t dma_tx_address;
    uint32_t dma_rx_address;
    actor_t *target_actor;
    void *target_argument;

    uint8_t *dma_rx_buffer;
} ;


extern actor_class_t transport_i2c_class;

/* Start of autogenerated OD accessors */
typedef enum transport_i2c_properties_properties {
  TRANSPORT_I2C_DMA_RX_UNIT = 0x01,
  TRANSPORT_I2C_DMA_RX_STREAM = 0x02,
  TRANSPORT_I2C_DMA_RX_CHANNEL = 0x03,
  TRANSPORT_I2C_DMA_RX_BUFFER_SIZE = 0x04,
  TRANSPORT_I2C_DMA_TX_UNIT = 0x05,
  TRANSPORT_I2C_DMA_TX_STREAM = 0x06,
  TRANSPORT_I2C_DMA_TX_CHANNEL = 0x07,
  TRANSPORT_I2C_BAUDRATE = 0x08,
  TRANSPORT_I2C_DATABITS = 0x09,
  TRANSPORT_I2C_PHASE = 0x0A
} transport_i2c_properties_properties_t;

/* 0x62XX0A: null */
#define transport_i2c_set_phase(i2c, value) actor_set_property_numeric(i2c->actor, (uint32_t) value, sizeof(uint8_t), TRANSPORT_I2C_PHASE)
#define transport_i2c_get_phase(i2c) *((uint8_t *) actor_get_property_pointer(i2c->actor, &(uint8_t[sizeof(uint8_t)]{}), sizeof(uint8_t), TRANSPORT_I2C_PHASE)
/* End of autogenerated OD accessors */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif