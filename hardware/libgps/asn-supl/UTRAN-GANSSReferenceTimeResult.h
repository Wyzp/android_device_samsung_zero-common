/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_UTRAN_GANSSReferenceTimeResult_H_
#define	_UTRAN_GANSSReferenceTimeResult_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SET-GANSSReferenceTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTRAN-GANSSReferenceTimeResult */
typedef struct UTRAN_GANSSReferenceTimeResult {
	long	 ganssTimeID;
	SET_GANSSReferenceTime_t	 set_GANSSReferenceTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRAN_GANSSReferenceTimeResult_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRAN_GANSSReferenceTimeResult;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRAN_GANSSReferenceTimeResult_H_ */
#include <asn_internal.h>
