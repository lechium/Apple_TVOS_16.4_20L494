//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLDispatchSilo, NSString;

@interface CLSedentaryTimerNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000014c676
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000014c65d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000014c600
+ (_Bool)isSupported;	// IMP=0x001000000014d41e
- (void)timeZoneDidChange:(id)arg1;	// IMP=0x004000000014d3f1
- (int)syncgetSedentaryAlarmData:(void *)arg1 since:(double)arg2;	// IMP=0x001000000014d2cf
- (int)syncgetStopTimerForClient:(id)arg1;	// IMP=0x001000000014d0a9
- (int)syncgetStartTimerForClient:(id)arg1 andOptions:(id)arg2;	// IMP=0x001000000014c8b0
- (_Bool)syncgetIsTimerArmed;	// IMP=0x001000000014c88a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000014c862
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000014c835
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000014c80d
- (void *)adaptee;	// IMP=0x001000000014c7da
- (void)endService;	// IMP=0x001000000014c7bf
- (void)beginService;	// IMP=0x000000000014c70f
- (id)init;	// IMP=0x001000000014c6d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
