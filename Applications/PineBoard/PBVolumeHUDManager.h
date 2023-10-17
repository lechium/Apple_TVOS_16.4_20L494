//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemOverlayController, PBVolumeHUDViewController;
@protocol OS_dispatch_source;

@interface PBVolumeHUDManager : NSObject
{
    _Bool _dismissalStarted;	// 8 = 0x8
    _Bool _dismissalInterrupted;	// 9 = 0x9
    _Bool _volumeUpButtonIsDown;	// 10 = 0xa
    _Bool _volumeDownButtonIsDown;	// 11 = 0xb
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    PBVolumeHUDViewController *_volumeHUDViewController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dismissalTimer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000017a66e
+ (id)dependencyDescription;	// IMP=0x001000000017a547
- (void).cxx_destruct;	// IMP=0x002000000017b0c6
@property(nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
@property(nonatomic) _Bool dismissalInterrupted; // @synthesize dismissalInterrupted=_dismissalInterrupted;
@property(nonatomic) _Bool dismissalStarted; // @synthesize dismissalStarted=_dismissalStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(readonly, nonatomic) PBVolumeHUDViewController *volumeHUDViewController; // @synthesize volumeHUDViewController=_volumeHUDViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (id)glyphNameForRouteType:(long long)arg1;	// IMP=0x001000000017b034
- (void)cancelDismissalTimer;	// IMP=0x001000000017b004
- (void)startDismissalTimer;	// IMP=0x001000000017af0b
- (void)dismissVolumeHUD;	// IMP=0x001000000017ad67
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x001000000017aca1
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x001000000017ac21
- (void)showVolumeHUDWithImage:(id)arg1 level:(id)arg2;	// IMP=0x001000000017a94a
- (void)noteVolumeDownWasHit:(_Bool)arg1;	// IMP=0x001000000017a8ed
- (void)noteVolumeUpWasHit:(_Bool)arg1;	// IMP=0x001000000017a890
- (_Bool)isPresenting;	// IMP=0x001000000017a879
- (id)init;	// IMP=0x001000000017a6f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

