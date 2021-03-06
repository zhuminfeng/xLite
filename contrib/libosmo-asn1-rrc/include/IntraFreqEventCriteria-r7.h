/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFreqEventCriteria_r7_H_
#define	_IntraFreqEventCriteria_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqEvent-r7.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* IntraFreqEventCriteria-r7 */
typedef struct IntraFreqEventCriteria_r7 {
	IntraFreqEvent_r7_t	 event;
	Hysteresis_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventCriteria_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventCriteria_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"

#endif	/* _IntraFreqEventCriteria_r7_H_ */
#include <asn_internal.h>
