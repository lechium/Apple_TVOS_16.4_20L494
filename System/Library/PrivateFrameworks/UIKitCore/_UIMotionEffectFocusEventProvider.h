//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusEventProvider
{
    _Bool _isGeneratingEvents;	// 8 = 0x8
    struct CGPoint _focusPosition;	// 16 = 0x10
    struct CGPoint _lastReportedPosition;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000baa45f
+ (id)sharedInstance;	// IMP=0x0010000000baa44e
+ (void)initialize;	// IMP=0x0010000000baa424
- (void)focusEffectsController:(id)arg1 updateMovementDirection:(struct CGVector)arg2;	// IMP=0x0000000000baa6d6
@property(nonatomic) struct CGPoint focusPosition;
- (id)currentEvent;	// IMP=0x0000000000baa52e
- (void)stopGeneratingEvents;	// IMP=0x0000000000baa517
- (void)startGeneratingEvents;	// IMP=0x0000000000baa500
- (_Bool)wantsSynchronizedUpdates;	// IMP=0x0000000000baa4f8
- (id)init;	// IMP=0x0000000000baa4a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

