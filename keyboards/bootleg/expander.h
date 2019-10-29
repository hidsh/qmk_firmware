#pragma once

#include "matrix.h"
#include "bootleg.h"

#define MCP23017
// device address
#define MCP23017_A0 0
#define MCP23017_A1 0
#define MCP23017_A2 0

#ifdef MCP23017
#define EXPANDER_ADDR (0x20|(MCP23017_A0<<0)|(MCP23017_A1<<1)|(MCP23017_A2<<2))

enum EXPANDER_REG_BANK0 {
  EXPANDER_REG_IODIRA = 0,
  EXPANDER_REG_IODIRB,
  EXPANDER_REG_IPOLA,
  EXPANDER_REG_IPOLB,
  EXPANDER_REG_GPINTENA,
  EXPANDER_REG_GPINTENB,
  EXPANDER_REG_DEFVALA,
  EXPANDER_REG_DEFVALB,
  EXPANDER_REG_INTCONA,
  EXPANDER_REG_INTCONB,
  EXPANDER_REG_IOCONA,
  EXPANDER_REG_IOCONB,
  EXPANDER_REG_GPPUA,
  EXPANDER_REG_GPPUB,
  EXPANDER_REG_INTFA,
  EXPANDER_REG_INTFB,
  EXPANDER_REG_INTCAPA,
  EXPANDER_REG_INTCAPB,
  EXPANDER_REG_GPIOA,
  EXPANDER_REG_GPIOB,
  EXPANDER_REG_OLATA,
  EXPANDER_REG_OLATB
};
#endif

typedef enum {ES_ATTACHED=0, ES_DETACHED} EXPANDER_STATUS_t;
typedef enum {EA_AVAILABLE=0, EA_UNAVAIL} EXPANDER_AVAILABILITY_t;

void expander_init(void);
void expander_attach(void);
matrix_row_t expander_read_cols(void);
void expander_unselect_rows(void);
void expander_select_row(uint8_t row);

