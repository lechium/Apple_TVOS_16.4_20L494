//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemGestureHandle, PBSystemOverlayController;

@interface PBRestrictionPINManager : NSObject
{
    _Bool _shouldRestoreConferenceRoomDisplay;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    CDUnknownBlockType _pinRestrictionResultBlock;	// 24 = 0x18
    PBSystemGestureHandle *_dismissGesture;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000021554
+ (id)dependencyDescription;	// IMP=0x0010000000021433
- (void).cxx_destruct;	// IMP=0x0020000000021eb0
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(readonly, nonatomic) _Bool shouldRestoreConferenceRoomDisplay; // @synthesize shouldRestoreConferenceRoomDisplay=_shouldRestoreConferenceRoomDisplay;
@property(readonly, nonatomic) CDUnknownBlockType pinRestrictionResultBlock; // @synthesize pinRestrictionResultBlock=_pinRestrictionResultBlock;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)_setupGesturesWithManager:(id)arg1;	// IMP=0x0010000000021d88
- (void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000021d41
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0010000000021cd0
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000021bc5
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x0010000000021bae
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021995
- (_Bool)dismiss;	// IMP=0x00100000000218d8
- (void)presentWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021803
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x00100000000217aa
- (id)init;	// IMP=0x00100000000215db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

