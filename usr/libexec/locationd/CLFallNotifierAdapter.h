//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFallNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000042ae6e
+ (id)getSilo;	// IMP=0x001000000042ac5a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000042ac41
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000042abe4
- (void)setHgalCaptureMode:(unsigned char)arg1;	// IMP=0x002000000042af93
- (void)simulateEvent:(unsigned long long)arg1;	// IMP=0x001000000042ae76
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000042ae46
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000042ae19
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000042adf1
- (void *)adaptee;	// IMP=0x001000000042adbe
- (void)endService;	// IMP=0x001000000042ada3
- (void)beginService;	// IMP=0x001000000042acf3
- (id)init;	// IMP=0x001000000042acb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

