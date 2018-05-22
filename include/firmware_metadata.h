/*
 * @file	firmware_metadata.h
 * @date	May 19, 2018
 * @author	robin
 * @brief   Description of file here...
 */

#ifndef INCLUDE_FIRMWARE_METADATA_H_
#define INCLUDE_FIRMWARE_METADATA_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

typedef struct FirmwareMetadata
{
	uint8_t major;
	uint8_t minor;
	uint8_t rev;
	uint8_t _reserved0;
	uint32_t _reserved1;
	uint32_t _reserved2;
} FirmwareMetadata_t;

extern const FirmwareMetadata_t fw_meta;

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_FIRMWARE_METADATA_H_ */
