//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaStreamReceiveGroup
{
    NSNumber *_optedInStreamID;	// 200 = 0xc8
    NSNumber *_activeStreamID;	// 208 = 0xd0
    _Bool _receivingEndToEndStream;	// 216 = 0xd8
    NSMutableDictionary *_streamToMaxNetworkBitrate;	// 224 = 0xe0
    NSMutableDictionary *_streamToActualNetworkBitrate;	// 232 = 0xe8
}

@property(retain, nonatomic) NSNumber *activeStreamID; // @synthesize activeStreamID=_activeStreamID;
@property(readonly, nonatomic) NSNumber *optedInStreamID; // @synthesize optedInStreamID=_optedInStreamID;
- (void)notifyChangeInActiveMediaBitrateTo:(unsigned int)arg1 from:(unsigned int)arg2;	// IMP=0x0000000000130449
- (void)setupMaxBitrateMap;	// IMP=0x000000000013011b
- (void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:(id)arg1;	// IMP=0x000000000012ff36
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;	// IMP=0x000000000012fd51
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;	// IMP=0x000000000012fbcc
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;	// IMP=0x000000000012fa47
- (void)setActualBitrateForOptedInStreamWithActiveStreamID:(id)arg1;	// IMP=0x000000000012f702
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x000000000012f637
- (void)dealloc;	// IMP=0x000000000012f5a0
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000012f258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

