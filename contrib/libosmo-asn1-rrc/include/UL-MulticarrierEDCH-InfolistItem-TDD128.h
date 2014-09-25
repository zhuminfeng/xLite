/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UL_MulticarrierEDCH_InfolistItem_TDD128_H_
#define	_UL_MulticarrierEDCH_InfolistItem_TDD128_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UARFCN.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_PUCH_Info_MulticarrierEDCH_TDD128;
struct E_AGCH_Information_TDD128;
struct E_HICH_Information_TDD128;

/* UL-MulticarrierEDCH-InfolistItem-TDD128 */
typedef struct UL_MulticarrierEDCH_InfolistItem_TDD128 {
	UARFCN_t	 uarfcn;
	long	 prxdes_base;
	struct E_PUCH_Info_MulticarrierEDCH_TDD128	*e_PUCH_info	/* OPTIONAL */;
	struct E_AGCH_Information_TDD128	*e_AGCH_info	/* OPTIONAL */;
	struct E_HICH_Information_TDD128	*e_HICH_info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_MulticarrierEDCH_InfolistItem_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_MulticarrierEDCH_InfolistItem_TDD128;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-PUCH-Info-MulticarrierEDCH-TDD128.h"
#include "E-AGCH-Information-TDD128.h"
#include "E-HICH-Information-TDD128.h"

#endif	/* _UL_MulticarrierEDCH_InfolistItem_TDD128_H_ */
#include <asn_internal.h>