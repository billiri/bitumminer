#ifndef BITUM_H
#define BITUM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void	bitum_hash_nonce(uint32_t grid, uint32_t block, uint32_t threads,
	    uint32_t startNonce, uint32_t *resNonce, uint32_t targetHigh);
void	bitum_cpu_setBlock_52(const uint32_t *input);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BITUM_H */
