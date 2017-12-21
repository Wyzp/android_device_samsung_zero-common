/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "ThirdPartyID.h"

static int check_permitted_alphabet_2(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_4(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static const int permitted_alphabet_table_5[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5,	/*    # %       -./ */
 6, 7, 8, 9,10,11,12,13,14,15,16, 0, 0, 0, 0,17,	/* 0123456789:    ? */
18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,	/* @ABCDEFGHIJKLMNO */
34,35,36,37,38,39,40,41,42,43,44, 0, 0, 0, 0,45,	/* PQRSTUVWXYZ    _ */
 0,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,	/*  abcdefghijklmno */
61,62,63,64,65,66,67,68,69,70,71, 0, 0, 0,72, 0,	/* pqrstuvwxyz   ~  */
};
static const int permitted_alphabet_code2value_5[72] = {
35,37,45,46,47,48,49,50,51,52,53,54,55,56,57,58,
63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,
79,80,81,82,83,84,85,86,87,88,89,90,95,97,98,99,
100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,
116,117,118,119,120,121,122,126,};


static int check_permitted_alphabet_5(const void *sptr) {
	const int *table = permitted_alphabet_table_5;
	/* The underlying type is VisibleString */
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static const int permitted_alphabet_table_6[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5,	/*    # %       -./ */
 6, 7, 8, 9,10,11,12,13,14,15,16, 0, 0, 0, 0,17,	/* 0123456789:    ? */
18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,	/* @ABCDEFGHIJKLMNO */
34,35,36,37,38,39,40,41,42,43,44, 0, 0, 0, 0,45,	/* PQRSTUVWXYZ    _ */
 0,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,	/*  abcdefghijklmno */
61,62,63,64,65,66,67,68,69,70,71, 0, 0, 0,72, 0,	/* pqrstuvwxyz   ~  */
};
static const int permitted_alphabet_code2value_6[72] = {
35,37,45,46,47,48,49,50,51,52,53,54,55,56,57,58,
63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,
79,80,81,82,83,84,85,86,87,88,89,90,95,97,98,99,
100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,
116,117,118,119,120,121,122,126,};


static int check_permitted_alphabet_6(const void *sptr) {
	const int *table = permitted_alphabet_table_6;
	/* The underlying type is VisibleString */
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static const int permitted_alphabet_table_9[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5,	/*    # %       -./ */
 6, 7, 8, 9,10,11,12,13,14,15, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
 0,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,	/*  ABCDEFGHIJKLMNO */
31,32,33,34,35,36,37,38,39,40,41, 0, 0, 0, 0,42,	/* PQRSTUVWXYZ    _ */
 0,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,	/*  abcdefghijklmno */
58,59,60,61,62,63,64,65,66,67,68, 0, 0, 0,69, 0,	/* pqrstuvwxyz   ~  */
};
static const int permitted_alphabet_code2value_9[69] = {
35,37,45,46,47,48,49,50,51,52,53,54,55,56,57,65,
66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,
82,83,84,85,86,87,88,89,90,95,97,98,99,100,101,102,
103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,
119,120,121,122,126,};


static int check_permitted_alphabet_9(const void *sptr) {
	const int *table = permitted_alphabet_table_9;
	/* The underlying type is VisibleString */
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_logicalName_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 1000)
		 && !check_permitted_alphabet_2(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_msisdn_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_emailaddr_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 1000)
		 && !check_permitted_alphabet_4(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sip_uri_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_5(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_sip_uri_5_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_5)/sizeof(permitted_alphabet_table_5[0]))
		return -1;
	return permitted_alphabet_table_5[value] - 1;
}
static int asn_PER_MAP_sip_uri_5_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_5)/sizeof(permitted_alphabet_code2value_5[0]))
		return -1;
	return permitted_alphabet_code2value_5[code];
}
static int
memb_ims_public_identity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_6(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_ims_public_identity_6_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_6)/sizeof(permitted_alphabet_table_6[0]))
		return -1;
	return permitted_alphabet_table_6[value] - 1;
}
static int asn_PER_MAP_ims_public_identity_6_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_6)/sizeof(permitted_alphabet_code2value_6[0]))
		return -1;
	return permitted_alphabet_code2value_6[code];
}
static int
memb_min_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 34)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_mdn_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_uri_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_9(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_uri_9_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_9)/sizeof(permitted_alphabet_table_9[0]))
		return -1;
	return permitted_alphabet_table_9[value] - 1;
}
static int asn_PER_MAP_uri_9_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_9)/sizeof(permitted_alphabet_code2value_9[0]))
		return -1;
	return permitted_alphabet_code2value_9[code];
}
static asn_per_constraints_t asn_PER_memb_logicalName_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 10,  10,  1,  1000 }	/* (SIZE(1..1000)) */,
	0, 0	/* No PER character map necessary */
};
static asn_per_constraints_t asn_PER_memb_msisdn_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_emailaddr_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 10,  10,  1,  1000 }	/* (SIZE(1..1000)) */,
	0, 0	/* No PER character map necessary */
};
static asn_per_constraints_t asn_PER_memb_sip_uri_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  35,  126 }	/* (35..126) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	asn_PER_MAP_sip_uri_5_v2c,	/* Value to PER code map */
	asn_PER_MAP_sip_uri_5_c2v	/* PER code to value map */
};
static asn_per_constraints_t asn_PER_memb_ims_public_identity_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  35,  126 }	/* (35..126) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	asn_PER_MAP_ims_public_identity_6_v2c,	/* Value to PER code map */
	asn_PER_MAP_ims_public_identity_6_c2v	/* PER code to value map */
};
static asn_per_constraints_t asn_PER_memb_min_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  34,  34 }	/* (SIZE(34..34)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mdn_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_uri_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  35,  126 }	/* (35..126) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	asn_PER_MAP_uri_9_v2c,	/* Value to PER code map */
	asn_PER_MAP_uri_9_c2v	/* PER code to value map */
};
static asn_per_constraints_t asn_PER_type_ThirdPartyID_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ThirdPartyID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.logicalName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		memb_logicalName_constraint_1,
		&asn_PER_memb_logicalName_constr_2,
		0,
		"logicalName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.msisdn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_msisdn_constraint_1,
		&asn_PER_memb_msisdn_constr_3,
		0,
		"msisdn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.emailaddr),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		memb_emailaddr_constraint_1,
		&asn_PER_memb_emailaddr_constr_4,
		0,
		"emailaddr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.sip_uri),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		memb_sip_uri_constraint_1,
		&asn_PER_memb_sip_uri_constr_5,
		0,
		"sip-uri"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.ims_public_identity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		memb_ims_public_identity_constraint_1,
		&asn_PER_memb_ims_public_identity_constr_6,
		0,
		"ims-public-identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.min),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_min_constraint_1,
		&asn_PER_memb_min_constr_7,
		0,
		"min"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.mdn),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_mdn_constraint_1,
		&asn_PER_memb_mdn_constr_8,
		0,
		"mdn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThirdPartyID, choice.uri),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		memb_uri_constraint_1,
		&asn_PER_memb_uri_constr_9,
		0,
		"uri"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ThirdPartyID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logicalName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* msisdn */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* emailaddr */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sip-uri */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ims-public-identity */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* min */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mdn */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* uri */
};
static asn_CHOICE_specifics_t asn_SPC_ThirdPartyID_specs_1 = {
	sizeof(struct ThirdPartyID),
	offsetof(struct ThirdPartyID, _asn_ctx),
	offsetof(struct ThirdPartyID, present),
	sizeof(((struct ThirdPartyID *)0)->present),
	asn_MAP_ThirdPartyID_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	8	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ThirdPartyID = {
	"ThirdPartyID",
	"ThirdPartyID",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_ThirdPartyID_constr_1,
	asn_MBR_ThirdPartyID_1,
	8,	/* Elements count */
	&asn_SPC_ThirdPartyID_specs_1	/* Additional specs */
};

