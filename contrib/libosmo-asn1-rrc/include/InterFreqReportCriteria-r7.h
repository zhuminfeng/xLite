/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterFreqReportCriteria_r7_H_
#define	_InterFreqReportCriteria_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqReportingCriteria-r7.h"
#include "InterFreqReportingCriteria-r6.h"
#include "PeriodicalWithReportingCellStatus.h"
#include "ReportingCellStatusOpt.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqReportCriteria_r7_PR {
	InterFreqReportCriteria_r7_PR_NOTHING,	/* No components present */
	InterFreqReportCriteria_r7_PR_intraFreqReportingCriteria,
	InterFreqReportCriteria_r7_PR_interFreqReportingCriteria,
	InterFreqReportCriteria_r7_PR_periodicalReportingCriteria,
	InterFreqReportCriteria_r7_PR_noReporting
} InterFreqReportCriteria_r7_PR;

/* InterFreqReportCriteria-r7 */
typedef struct InterFreqReportCriteria_r7 {
	InterFreqReportCriteria_r7_PR present;
	union InterFreqReportCriteria_r7_u {
		IntraFreqReportingCriteria_r7_t	 intraFreqReportingCriteria;
		InterFreqReportingCriteria_r6_t	 interFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqReportCriteria_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqReportCriteria_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqReportCriteria_r7_H_ */
#include <asn_internal.h>
