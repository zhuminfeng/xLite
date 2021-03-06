/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UL_EDCH_Information_ext_H_
#define	_UL_EDCH_Information_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_EDCH_Information_ext_PR {
	UL_EDCH_Information_ext_PR_NOTHING,	/* No components present */
	UL_EDCH_Information_ext_PR_fdd,
	UL_EDCH_Information_ext_PR_tdd
} UL_EDCH_Information_ext_PR;

/* Forward declarations */
struct Non_ScheduledTransGrantInfoTDD_ext;

/* UL-EDCH-Information-ext */
typedef struct UL_EDCH_Information_ext {
	UL_EDCH_Information_ext_PR present;
	union UL_EDCH_Information_ext_u {
		NULL_t	 fdd;
		struct UL_EDCH_Information_ext__tdd {
			struct Non_ScheduledTransGrantInfoTDD_ext	*non_ScheduledTransGrantInfo	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_EDCH_Information_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_EDCH_Information_ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Non-ScheduledTransGrantInfoTDD-ext.h"

#endif	/* _UL_EDCH_Information_ext_H_ */
#include <asn_internal.h>
