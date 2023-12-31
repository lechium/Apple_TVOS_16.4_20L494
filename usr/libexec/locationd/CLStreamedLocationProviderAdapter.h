//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStreamedLocationProviderAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000000ec584
+ (id)getSilo;	// IMP=0x00100000000ec370
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec357
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000000ec2fa
- (void)pairedDeviceIsNearby:(_Bool)arg1;	// IMP=0x00200000000ed493
- (void)successfullySentMessage:(id)arg1;	// IMP=0x00100000000ed48d
- (void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x00100000000ed487
- (void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2;	// IMP=0x00100000000ed3d5
- (void)releaseEmergencyEnablementAssertion;	// IMP=0x00100000000ed085
- (void)takeEmergencyEnablementAssertion;	// IMP=0x00100000000ecd2a
- (void)releaseDisablementAssertion;	// IMP=0x00100000000ec9d1
- (void)takeDisablementAssertion;	// IMP=0x00100000000ec660
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ec55c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec52f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ec507
- (void *)adaptee;	// IMP=0x00100000000ec4d4
- (void)endService;	// IMP=0x00100000000ec4b9
- (void)beginService;	// IMP=0x00100000000ec409
- (id)init;	// IMP=0x00100000000ec3cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

