#ifndef DATABASE_H
#define DATABASE_H

#include "typedef.h"


struct db_table {
    const char *name;
    u8 value_bits;
    int value;
};

#define VM_DB_DATA   2  //不能改
#define WIFI_INFO     8
#define BOARD_INFO     9
#define DAC_TRIM_FLAG     10
#define DAC_TRIM_INFO     11

int db_select_buffer(u8 index, char *buffer, int len);

int db_update_buffer(u8 index, char *buffer, int len);

int db_create(const char *store_dev);


int db_create_table(const struct db_table *table, int num);

u32 db_select(const char *table);

int db_update(const char *table, u32 value);

int db_flush();

int db_reset();

int db_erase();

#endif

