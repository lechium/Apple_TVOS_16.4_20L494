//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct ccdh_gp;

struct ccdigest_info;

struct ccmode_cbc;

struct ccmode_ecb;

struct ccmode_gcm;

struct ccrng_state;

struct ccrsa_full_ctx {
    unsigned long long _field1;
    unsigned long long _field2;
    struct cczp_funcs *_field3;
    unsigned long long _field4[0];
};

struct ccses_crypto_t {
    struct ccdigest_info *_field1;
    struct ccdh_gp *_field2;
    struct ccmode_ecb *_field3;
    struct ccmode_ecb *_field4;
    struct ccmode_cbc *_field5;
    struct ccmode_cbc *_field6;
    struct ccrng_state *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
};

struct ccsrp_ctx {
    struct ccdigest_info *_field1;
    struct ccdh_gp *_field2;
    struct ccrng_state *_field3;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :16;
    } _field4;
    unsigned long long _field5[1];
};

struct cczp_funcs;

struct ckvr_srp_context {
    struct ccrng_state *_field1;
    struct ccdigest_info *_field2;
    struct ccmode_cbc *_field3;
    struct ccmode_cbc *_field4;
    struct ccmode_gcm *_field5;
    struct ccmode_gcm *_field6;
    struct ccsrp_ctx *_field7;
};

