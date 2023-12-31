//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000213c2d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000213c14
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000213bb7
- (void)setRealTimeHarvestTriggered:(double)arg1;	// IMP=0x0020000000215262
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x001000000021525c
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000214f9b
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000214f95
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x0010000000214f58
- (void)setTrackRunHint:(id)arg1;	// IMP=0x0010000000214e11
- (_Bool)syncgetZaxisStats:(void *)arg1;	// IMP=0x001000000021431e
- (_Bool)syncgetActiveTechs:(void *)arg1;	// IMP=0x0010000000213e71
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x0010000000213e42
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000213e1a
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000213ded
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000213dc5
- (void *)adaptee;	// IMP=0x0010000000213d92
- (void)endService;	// IMP=0x0010000000213d77
- (void)beginService;	// IMP=0x0010000000213cc6
- (id)init;	// IMP=0x0010000000213c89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

