#ifndef MODULE_EMULATOR_BISS_H_
#define MODULE_EMULATOR_BISS_H_

#include <openssl/rsa.h>
#include <openssl/pem.h>

#ifndef BISS2_MAX_RSA_KEYS
#define BISS2_MAX_RSA_KEYS 10
#endif

typedef struct biss2_rsa_key
{
	uint8_t ekid[8];
	RSA *key;
} biss2_rsa_key_t;

uint16_t biss_read_pem(struct s_reader *rdr, uint8_t max_keys);

#endif // MODULE_EMULATOR_BISS_H_
