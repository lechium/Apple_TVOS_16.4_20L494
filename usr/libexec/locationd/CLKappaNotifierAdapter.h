//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CLKappaNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000a65a37
+ (id)getSilo;	// IMP=0x0010000000a65882
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a65869
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a6580c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000a65a0f
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a659e2
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a659ba
- (void *)adaptee;	// IMP=0x0010000000a65987
- (void)endService;	// IMP=0x0010000000a6596c
- (void)beginService;	// IMP=0x0010000000a6591b
- (id)init;	// IMP=0x0010000000a658de
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x0010000000a65806
- (MISSING_TYPE *)emergencyStateChange: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000a65669
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000a65663
- (int)syncgetKappaState;	// IMP=0x0010000000a65601
- (void)forceTrigger;	// IMP=0x0010000000a655e0
- (void)dontcollect;	// IMP=0x0010000000a6550c
- (void)collect;	// IMP=0x0010000000a65438
- (void)simulateTriggerWithDelay:(int)arg1;	// IMP=0x0010000000a652e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
