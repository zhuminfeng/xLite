/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DeltaRSCPPerCell_H_
#define	_DeltaRSCPPerCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaRSCP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DeltaRSCPPerCell */
typedef struct DeltaRSCPPerCell {
	DeltaRSCP_t	*deltaRSCP	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaRSCPPerCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeltaRSCPPerCell;

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaRSCPPerCell_H_ */
#include <asn_internal.h>
