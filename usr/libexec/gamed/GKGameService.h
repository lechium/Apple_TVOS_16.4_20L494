//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface GKGameService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000004608c
+ (Class)interfaceClass;	// IMP=0x001000000004607b
- (oneway void)storeGameForBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000004a232
- (MISSING_TYPE *)_getPerGameFriendsPlayerIDForBundleID:handler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000491f4
- (oneway void)resetTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x0010000000048f6d
- (oneway void)checkTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x0010000000048bff
- (oneway void)getPerGameFriendsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004831f
- (oneway void)setPerGameSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047617
- (oneway void)getPerGameSettingsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046d18
- (oneway void)getArcadeHighlightForAdamID:(id)arg1 count:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046097

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

