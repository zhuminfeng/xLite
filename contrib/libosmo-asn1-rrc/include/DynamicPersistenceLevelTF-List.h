/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DynamicPersistenceLevelTF_List_H_
#define	_DynamicPersistenceLevelTF_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DynamicPersistenceLevel.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DynamicPersistenceLevelTF-List */
typedef struct DynamicPersistenceLevelTF_List {
	A_SEQUENCE_OF(DynamicPersistenceLevel_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DynamicPersistenceLevelTF_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DynamicPersistenceLevelTF_List;

#ifdef __cplusplus
}
#endif

#endif	/* _DynamicPersistenceLevelTF_List_H_ */
#include <asn_internal.h>
