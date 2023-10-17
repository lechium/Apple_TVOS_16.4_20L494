//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSpringTrackingNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000009709e6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009709cd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000970970
+ (_Bool)isSupported;	// IMP=0x00100000009710e3
- (void)querySinceRecord:(struct CLSpringTrackerEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000970f16
- (int)syncgetStopTracking;	// IMP=0x0010000000970e0d
- (int)syncgetStartTracking;	// IMP=0x0010000000970c19
- (_Bool)syncgetIsTracking;	// IMP=0x0010000000970bfa
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000970bd2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000970ba5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000970b7d
- (void *)adaptee;	// IMP=0x0010000000970b4a
- (void)endService;	// IMP=0x0010000000970b2f
- (void)beginService;	// IMP=0x0010000000970a7f
- (id)init;	// IMP=0x0010000000970a42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

