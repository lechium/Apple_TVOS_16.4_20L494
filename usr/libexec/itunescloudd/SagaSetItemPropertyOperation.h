//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SagaSetItemPropertyOperation
{
    unsigned int _sagaID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000754e5
- (void).cxx_destruct;	// IMP=0x00200000000752f1
- (void)main;	// IMP=0x0010000000074fbb
- (_Bool)isPersistent;	// IMP=0x0010000000074fb3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000074f13
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000074dee
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 sagaID:(unsigned int)arg3 properties:(id)arg4;	// IMP=0x0010000000074d4e
- (id)initWithSagaID:(unsigned int)arg1 properties:(id)arg2;	// IMP=0x0010000000074cc2

@end
