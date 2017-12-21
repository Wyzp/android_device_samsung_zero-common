/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_TimeslotISCP_List_H_
#define	_TimeslotISCP_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotISCP.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeslotISCP-List */
typedef struct TimeslotISCP_List {
	A_SEQUENCE_OF(TimeslotISCP_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeslotISCP_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeslotISCP_List;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeslotISCP_List_H_ */
#include <asn_internal.h>
