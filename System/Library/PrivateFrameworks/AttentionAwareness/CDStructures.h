//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AWFaceDetectMetadata {
    _Bool _field1;
    double _field2;
    double _field3;
    double _field4;
    unsigned long long _field5;
    double _field6;
};

struct AWRemoteMetadata {
    long long _field1;
    long long _field2;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
} CDStruct_264b1ab3;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct {
        CDStruct_264b1ab3 _field1;
        unsigned long long _field2;
        int _field3;
        int _field4;
    } _field5[0];
} CDStruct_89f0e72b;

#pragma mark Typedef'd Unions

typedef union {
    struct AWFaceDetectMetadata _field1;
    struct AWRemoteMetadata _field2;
} CDUnion_b5ac7a34;

