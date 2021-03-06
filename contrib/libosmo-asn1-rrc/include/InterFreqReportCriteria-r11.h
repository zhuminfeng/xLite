/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterFreqReportCriteria_r11_H_
#define	_InterFreqReportCriteria_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqReportingCriteria-r11.h"
#include "InterFreqReportingCriteria-r11.h"
#include "PeriodicalWithReportingCellStatus-r10.h"
#include "ReportingCellStatusOpt-r10.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqReportCriteria_r11_PR {
	InterFreqReportCriteria_r11_PR_NOTHING,	/* No components present */
	InterFreqReportCriteria_r11_PR_intraFreqReportingCriteria,
	InterFreqReportCriteria_r11_PR_interFreqReportingCriteria,
	InterFreqReportCriteria_r11_PR_periodicalReportingCriteria,
	InterFreqReportCriteria_r11_PR_noReporting
} InterFreqReportCriteria_r11_PR;

/* InterFreqReportCriteria-r11 */
typedef struct InterFreqReportCriteria_r11 {
	InterFreqReportCriteria_r11_PR present;
	union InterFreqReportCriteria_r11_u {
		IntraFreqReportingCriteria_r11_t	 intraFreqReportingCriteria;
		InterFreqReportingCriteria_r11_t	 interFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_r10_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_r10_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqReportCriteria_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqReportCriteria_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqReportCriteria_r11_H_ */
#include <asn_internal.h>
