/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GPSAcquisAssist_R10_Ext_Element_H_
#define	_GPSAcquisAssist_R10_Ext_Element_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatelliteID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GPSAcquisAssist-R10-Ext-Element */
typedef struct GPSAcquisAssist_R10_Ext_Element {
	SatelliteID_t	 satelliteID;
	long	 azimuthLSB;
	long	 elevationLSB;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GPSAcquisAssist_R10_Ext_Element_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPSAcquisAssist_R10_Ext_Element;

#ifdef __cplusplus
}
#endif

#endif	/* _GPSAcquisAssist_R10_Ext_Element_H_ */
#include <asn_internal.h>
