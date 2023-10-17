//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct pair<bool, float> {
    _Bool _field1;
    float _field2;
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool supportsGyro;
    double gyroPitch;
    double gyroYaw;
    double gyroRoll;
    _Bool supportsAccelerometer;
    double accelerometerX;
    double accelerometerY;
    double accelerometerZ;
    _Bool supportsAttitude;
    double attitudeX;
    double attitudeY;
    double attitudeZ;
    double attitudeW;
} CDStruct_06597ee6;

typedef struct {
    _Bool updatePending;
    long long mode;
    unsigned short enabledPositions;
    unsigned char resistiveStrengths[10];
    unsigned char frequency;
    unsigned char workingMode;
    unsigned char armPosition;
    unsigned char adtControlStatus;
} CDStruct_066b757d;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
} CDStruct_f4b747e6;

typedef struct {
    unsigned long long mask;
    float buttons[45];
} CDStruct_cd435f0f;

typedef struct {
    unsigned char _field1[10];
} CDStruct_7d73c414;

typedef struct {
    _Bool LED[5];
} CDStruct_0f7f9b7b;

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_8bc48212;

typedef struct {
    unsigned int :2;
    unsigned int :6;
} CDStruct_d471940a;

typedef struct {
    CDStruct_8bc48212 _field1;
    CDStruct_8bc48212 _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    struct {
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :2;
    } _field8;
    unsigned char _field9;
    CDStruct_8bc48212 _field10;
    struct {
        union AdaptiveTriggerCommandData _field1;
        union AdaptiveTriggerCommandData _field2;
    } _field11;
    unsigned char _field12[4];
    struct {
        unsigned int :3;
        unsigned int :1;
        unsigned int :4;
    } _field13;
    unsigned char _field14;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :5;
    } _field15;
    unsigned char _field16;
    unsigned char _field17;
    CDStruct_d471940a _field18;
    CDStruct_d471940a _field19;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
    } _field20;
    CDStruct_f4b747e6 _field21;
    unsigned char _field22[16];
    unsigned char _field23[8];
    unsigned int _field24;
} CDStruct_2588e385;

// Template types
typedef struct pair<bool, float> {
    _Bool _field1;
    float _field2;
} pair_218a80e9;

#pragma mark Named Unions

union AdaptiveTriggerCommandData {
    struct {
        unsigned char _field1;
        unsigned char _field2[10];
    } _field1;
    struct {
        unsigned char _field1;
        unsigned int :10;
        unsigned int :6;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :2;
        unsigned char _field2[4];
    } _field2;
    struct {
        unsigned char _field1;
        unsigned int :10;
        unsigned int :6;
        unsigned int :3;
        unsigned int :3;
        unsigned int :2;
        unsigned char _field2[7];
    } _field3;
    struct {
        unsigned char _field1;
        unsigned int :10;
        unsigned int :6;
        unsigned int :3;
        unsigned int :5;
        unsigned char _field2[7];
    } _field4;
    struct {
        unsigned char _field1;
        unsigned int :10;
        unsigned int :6;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :2;
        unsigned char _field2[2];
        unsigned char _field3;
        unsigned char _field4[1];
    } _field5;
};

