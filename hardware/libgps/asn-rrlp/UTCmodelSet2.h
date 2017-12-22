/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UTCmodelSet2_H_
#define	_UTCmodelSet2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTCmodelSet2 */
typedef struct UTCmodelSet2 {
	long	 utcA0;
	long	 utcA1;
	long	 utcA2;
	long	 utcDeltaTls;
	long	 utcTot;
	long	 utcWNot;
	long	 utcWNlsf;
	BIT_STRING_t	 utcDN;
	long	 utcDeltaTlsf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTCmodelSet2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTCmodelSet2;

#ifdef __cplusplus
}
#endif

#endif	/* _UTCmodelSet2_H_ */
#include <asn_internal.h>