//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBAppInfoController, PBSceneManager, PBSetTopBoxQueryTransaction, PBSystemGestureHandle, VSIdentityProviderInfoCenter;

@interface PBChannelGuideUserActivityDispatcher : NSObject
{
    PBSceneManager *_sceneManager;	// 8 = 0x8
    VSIdentityProviderInfoCenter *_identityProviderInfoCenter;	// 16 = 0x10
    PBAppInfoController *_appInfoController;	// 24 = 0x18
    PBSetTopBoxQueryTransaction *_stbQueryTransaction;	// 32 = 0x20
    PBSystemGestureHandle *_guideButtonGesture;	// 40 = 0x28
}

+ (id)userActivityType;	// IMP=0x004000000010599a
+ (id)userActivity;	// IMP=0x0010000000105942
- (void).cxx_destruct;	// IMP=0x00200000001059ee
@property(readonly, nonatomic) PBSystemGestureHandle *guideButtonGesture; // @synthesize guideButtonGesture=_guideButtonGesture;
@property(readonly, nonatomic) PBSetTopBoxQueryTransaction *stbQueryTransaction; // @synthesize stbQueryTransaction=_stbQueryTransaction;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) VSIdentityProviderInfoCenter *identityProviderInfoCenter; // @synthesize identityProviderInfoCenter=_identityProviderInfoCenter;
@property(readonly, nonatomic) __weak PBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
- (_Bool)_canActivateApplication;	// IMP=0x001000000010593a
- (void)_openGuideUserActivityUsingApplicationRecord:(id)arg1;	// IMP=0x0010000000105671
- (id)_applicationRecordForCurrentApplicationScene;	// IMP=0x001000000010557c
- (id)_applicationRecordForBundleIdentifier:(id)arg1;	// IMP=0x0010000000105450
- (void)_activateSTBApplicationWithGuideUserActivityForBundleIdentifier:(id)arg1;	// IMP=0x001000000010527c
- (_Bool)_canSTBApplicationHandleGuideUserActivityForBundleIdentifier:(id)arg1;	// IMP=0x00100000001051b7
- (void)_fetchSTBBundleIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000104eb7
- (void)_activateSTBApplicationWithGuideUserActivity;	// IMP=0x0010000000104c24
- (void)_sendGuideUserActivityToCurrentApplication;	// IMP=0x0010000000104bbc
- (_Bool)_currentApplicationCanHandleChannelGuideActivityType;	// IMP=0x0010000000104b4e
- (id)_currentApplicationSceneAppInfo;	// IMP=0x0010000000104a80
- (_Bool)_currentApplicationSceneIsFocused;	// IMP=0x00100000001049dc
- (void)activateSTBApplication;	// IMP=0x0010000000104964
- (void)sendChannelGuideActivityToFocusedApplication;	// IMP=0x00100000001047a6
- (void)dealloc;	// IMP=0x0010000000104740
- (id)initWithSceneManager:(id)arg1;	// IMP=0x00100000001044d3

@end

