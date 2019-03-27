#ifndef PWN_H
#define PWN_H

#include <mach/mach.h>

#include "common.h"
#include "offsets.h"

kern_return_t machswap2_exploit(machswap_offsets_t *offsets, task_t *tfp0, uint64_t *kbase);

#endif
