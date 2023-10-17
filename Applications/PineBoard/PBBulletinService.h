//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, PBSystemOverlayController, PBSystemServiceConnection;
@protocol PBSBulletinServiceDelegate, PBSBulletinServiceInteractionDelegate;

@interface PBBulletinService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMapTable *_viewControllersByBulletin;	// 16 = 0x10
    NSMapTable *_bulletinInfoByBulletin;	// 24 = 0x18
    NSMutableDictionary *_pendingBulletinsByRequestID;	// 32 = 0x20
    id <PBSBulletinServiceDelegate> _delegateProxy;	// 40 = 0x28
    id <PBSBulletinServiceInteractionDelegate> _interactionDelegateProxy;	// 48 = 0x30
    PBSystemOverlayController *_overlayController;	// 56 = 0x38
}

+ (void)_setBulletinService:(id)arg1 forViewController:(id)arg2;	// IMP=0x00200000000cae87
+ (id)_bulletinServiceForViewController:(id)arg1;	// IMP=0x00100000000cadc7
+ (double)_timeoutForBulletin:(id)arg1;	// IMP=0x00100000000c9bf5
+ (void)applicationTerminateBulletinViewController:(id)arg1;	// IMP=0x00100000000c6ef5
+ (void)applicationRetireBulletinViewController:(id)arg1;	// IMP=0x00100000000c6e09
+ (_Bool)applicationDismissBulletinViewController:(id)arg1;	// IMP=0x00100000000c6d15
+ (void)applicationDeactivateBulletinViewController:(id)arg1;	// IMP=0x00100000000c6c2c
+ (void)applicationBulletinHandleMenuButtonForViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6b27
+ (void)applicationToggleBulletinViewControllerSize:(id)arg1;	// IMP=0x00100000000c6abc
+ (unsigned long long)applicationActivateBulletinViewController:(id)arg1;	// IMP=0x00100000000c6991
+ (_Bool)applicationShouldActivateBulletinViewController:(id)arg1 forAction:(unsigned long long)arg2;	// IMP=0x00100000000c696b
+ (unsigned long long)applicationActivationActionsForBulletinViewController:(id)arg1;	// IMP=0x00100000000c67ce
+ (id)_bulletinServicesByViewController;	// IMP=0x00100000000c5ce0
- (void).cxx_destruct;	// IMP=0x00200000000cb0f6
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(retain) id <PBSBulletinServiceInteractionDelegate> interactionDelegateProxy; // @synthesize interactionDelegateProxy=_interactionDelegateProxy;
@property(retain) id <PBSBulletinServiceDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) NSMutableDictionary *pendingBulletinsByRequestID; // @synthesize pendingBulletinsByRequestID=_pendingBulletinsByRequestID;
@property(readonly, nonatomic) NSMapTable *bulletinInfoByBulletin; // @synthesize bulletinInfoByBulletin=_bulletinInfoByBulletin;
@property(readonly, nonatomic) NSMapTable *viewControllersByBulletin; // @synthesize viewControllersByBulletin=_viewControllersByBulletin;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)_setBulletinInfo:(id)arg1 forBulletin:(id)arg2;	// IMP=0x00100000000cab93
- (id)_bulletinInfoForBulletin:(id)arg1;	// IMP=0x00100000000caad3
- (id)_bulletinForBulletinInfo:(id)arg1;	// IMP=0x00100000000ca8b3
- (void)_setViewController:(id)arg1 forBulletin:(id)arg2;	// IMP=0x00100000000ca67f
- (id)_viewControllerForBulletin:(id)arg1;	// IMP=0x00100000000ca5bf
- (id)_bulletinForViewController:(id)arg1;	// IMP=0x00100000000ca39f
- (_Bool)_shouldBeginUserInteractionOnActivationForViewController:(id)arg1;	// IMP=0x00100000000ca2ea
- (_Bool)_bulletinIsPending:(id)arg1;	// IMP=0x00100000000ca216
- (void)_updateRequestForBulletin:(id)arg1 withBulletin:(id)arg2;	// IMP=0x00100000000c9fba
- (id)_bulletinForRequestID:(unsigned long long)arg1;	// IMP=0x00100000000c9ee1
- (void)_setBulletin:(id)arg1 forRequestID:(unsigned long long)arg2;	// IMP=0x00100000000c9dba
- (void)_updateVideoBulletinViewController:(id)arg1 withBulletin:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c98d0
- (void)toggleBulletinSizeForViewController:(id)arg1;	// IMP=0x00100000000c986a
- (void)_setUserInteractionEnabled:(_Bool)arg1 forViewController:(id)arg2;	// IMP=0x00100000000c97ff
- (void)_handleMenuButtonForViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c9781
- (void)_prepareToPresentViewController:(id)arg1;	// IMP=0x00100000000c96e9
- (void)_handleApplicationDismissalForViewController:(id)arg1 withReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c92c7
- (void)_handleApplicationDismissalForViewController:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x00100000000c92b1
- (void)_handleApplicationDismissalForBulletin:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x00100000000c905d
- (void)_completeWithBulletin:(id)arg1 success:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c8e6f
- (id);	// IMP=0x00100000000c8d0b
- (void)remoteBulletinViewController:(id)arg1 didReceiveBulletinResponse:(id)arg2;	// IMP=0x00100000000c893f
- (void)setInteractionDelegate:(id)arg1;	// IMP=0x00100000000c892c
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000c8919
- (void)dismissBulletin:(id)arg1;	// IMP=0x00100000000c85de
- (id)updateBulletin:(id)arg1 withMessage:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c8191
- (void)xpcUpdateBulletin:(id)arg1 withMessage:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c7e5d
- (void)_presentBulletin:(id)arg1 prepared:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c6ff9
- (void)presentBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6fe1
- (void)bulletinManager:(id)arg1 willPresentBulletinViewController:(id)arg2 withActivationActions:(unsigned long long)arg3;	// IMP=0x00100000000c66da
- (void)invalidate;	// IMP=0x00100000000c5efa
- (void)dealloc;	// IMP=0x00100000000c5e85
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00100000000c5d5f
- (id)init;	// IMP=0x00100000000c5d51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

