/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "Common-MAC-ehs-ReorderingQueue.h"

static asn_TYPE_member_t asn_MBR_Common_MAC_ehs_ReorderingQueue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Common_MAC_ehs_ReorderingQueue, mac_ehs_QueueId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_ehs_QueueId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-ehs-QueueId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Common_MAC_ehs_ReorderingQueue, t1_ReleaseTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T1_ReleaseTimer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t1-ReleaseTimer"
		},
	{ ATF_POINTER, 1, offsetof(struct Common_MAC_ehs_ReorderingQueue, reorderingResetTimer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Treset_ResetTimer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reorderingResetTimer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Common_MAC_ehs_ReorderingQueue, mac_ehsWindowSize),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_hs_WindowSize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-ehsWindowSize"
		},
};
static int asn_MAP_Common_MAC_ehs_ReorderingQueue_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Common_MAC_ehs_ReorderingQueue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mac-ehs-QueueId at 4952 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t1-ReleaseTimer at 4953 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reorderingResetTimer at 4954 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mac-ehsWindowSize at 4956 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Common_MAC_ehs_ReorderingQueue_specs_1 = {
	sizeof(struct Common_MAC_ehs_ReorderingQueue),
	offsetof(struct Common_MAC_ehs_ReorderingQueue, _asn_ctx),
	asn_MAP_Common_MAC_ehs_ReorderingQueue_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Common_MAC_ehs_ReorderingQueue_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Common_MAC_ehs_ReorderingQueue = {
	"Common-MAC-ehs-ReorderingQueue",
	"Common-MAC-ehs-ReorderingQueue",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1,
	sizeof(asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1)
		/sizeof(asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1[0]), /* 1 */
	asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1,	/* Same as above */
	sizeof(asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1)
		/sizeof(asn_DEF_Common_MAC_ehs_ReorderingQueue_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Common_MAC_ehs_ReorderingQueue_1,
	4,	/* Elements count */
	&asn_SPC_Common_MAC_ehs_ReorderingQueue_specs_1	/* Additional specs */
};
