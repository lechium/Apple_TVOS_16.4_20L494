//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBSystemServiceConnection;

@interface PBMediaRemoteService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMutableDictionary *_pinViewControllerContextsByToken;	// 16 = 0x10
}

+ (_Bool)_connectionHasValidEntitlement:(id)arg1;	// IMP=0x002000000019a697
+ (void)_updateTVAVRPowerControlAvailableState;	// IMP=0x001000000019903e
+ (void)_updateVolumeControlAvailableState;	// IMP=0x0010000000198fa4
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000198f3a
+ (id)_audioRoutingController;	// IMP=0x0010000000198e7d
+ (void)initialize;	// IMP=0x0010000000198bf0
- (void).cxx_destruct;	// IMP=0x002000000019a78a
@property(readonly, nonatomic) NSMutableDictionary *pinViewControllerContextsByToken; // @synthesize pinViewControllerContextsByToken=_pinViewControllerContextsByToken;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (_Bool)_hasValidEntitlement;	// IMP=0x001000000019a64f
- (void)__volumeControlTargetDeviceTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000019a4f5
- (void)__noteUserPresenceDetected;	// IMP=0x001000000019a2df
- (void)__dismissPinDialogWithToken:(id)arg1;	// IMP=0x001000000019a0cc
- (void)__showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001999ad
- (void)__stopSiriWithContext:(id)arg1;	// IMP=0x0010000000199783
- (void)__startSiriWithContext:(id)arg1;	// IMP=0x001000000019945c
- (void)__activateSiriWithContext:(id)arg1;	// IMP=0x00100000001990fa
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x0010000000198b72
- (id)init;	// IMP=0x0010000000198b64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

