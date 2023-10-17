//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushReceivedSlowMetric : NSObject
{
    NSString *_guid;	// 8 = 0x8
    unsigned int _connectionType;	// 16 = 0x10
    NSNumber *_linkQuality;	// 24 = 0x18
    unsigned int _dualChannelState;	// 32 = 0x20
    NSNumber *_receiveOffset;	// 40 = 0x28
    NSNumber *_payloadSize;	// 48 = 0x30
    NSNumber *_isFromStorage;	// 56 = 0x38
    NSString *_topic;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000159b0
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSNumber *isFromStorage; // @synthesize isFromStorage=_isFromStorage;
@property(readonly, nonatomic) NSNumber *payloadSize; // @synthesize payloadSize=_payloadSize;
@property(readonly, nonatomic) NSNumber *receiveOffset; // @synthesize receiveOffset=_receiveOffset;
@property(readonly, nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 connectionType:(unsigned int)arg2 linkQuality:(id)arg3 dualChannelState:(unsigned int)arg4 receiveOffset:(id)arg5 payloadSize:(id)arg6 isFromStorage:(id)arg7 topic:(id)arg8;	// IMP=0x001000000001556e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

