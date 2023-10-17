//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CodedInputStream {
    char *_field1;
    char *_field2;
    struct ZeroCopyInputStream *_field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    _Bool _field7;
    _Bool _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    _Bool _field14;
    struct DescriptorPool *_field15;
    struct MessageFactory *_field16;
};

struct DescriptorPool;

struct IRProgram;

struct MessageFactory;

struct ZeroCopyInputStream;

struct _MIORange {
    long long lowerBound;
    long long upperBound;
};

struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> {
    struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> {
        struct IRProgram *__value_;
    } __ptr_;
};

