#ifndef _BASE64_H_
#define _BASE64_H_

#include "generic/typedef.h"

unsigned char *base64_encode(const unsigned char *src, int len, int *out_len);
unsigned char *base64_decode(const unsigned char *src, int len, int *out_len);

#endif


