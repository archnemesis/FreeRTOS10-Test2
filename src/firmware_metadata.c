/*
 * @file	firmware_metadata.c
 * @date	May 19, 2018
 * @author	robin
 * @brief   Description of file here...
 */

#include "firmware_metadata.h"

const FirmwareMetadata_t fw_meta __attribute__ ((packed,used,section(".firmware_metadata"))) = {
		1, 0, 1, 0, 0, 0
};
