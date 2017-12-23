/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_WimaxBSInformation_H_
#define	_WimaxBSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WimaxBsID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WimaxRTD;
struct WimaxNMRList;

/* WimaxBSInformation */
typedef struct WimaxBSInformation {
	WimaxBsID_t	 wimaxBsID;
	struct WimaxRTD	*wimaxRTD	/* OPTIONAL */;
	struct WimaxNMRList	*wimaxNMRList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WimaxBSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WimaxBSInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WimaxRTD.h"
#include "WimaxNMRList.h"

#endif	/* _WimaxBSInformation_H_ */
#include <asn_internal.h>