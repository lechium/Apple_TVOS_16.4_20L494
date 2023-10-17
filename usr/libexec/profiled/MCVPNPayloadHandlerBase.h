//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MCVPNPayloadHandlerBase
{
    struct __SCPreferences *_scPreferences;	// 32 = 0x20
    NSString *_originalName;	// 40 = 0x28
}

+ (id)managedServiceIDs;	// IMP=0x0040000000078d5c
- (void).cxx_destruct;	// IMP=0x0020000000078db0
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(nonatomic) struct __SCPreferences *scPreferences; // @synthesize scPreferences=_scPreferences;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0010000000078d56
- (void)unsetAside;	// IMP=0x0010000000078d50
- (void)setAside;	// IMP=0x0010000000078d4a
- (void)remove;	// IMP=0x0010000000078d44
- (_Bool)isInstalled;	// IMP=0x0010000000078d3c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000078d34
- (id)installService:(id)arg1;	// IMP=0x0010000000078d2c
- (id)cannotInstallErrorWithUnderlyingError:(id)arg1;	// IMP=0x0010000000078c2e
- (id)cannotInstallError;	// IMP=0x0010000000078c1a
- (id)PPTPDeprecatedError;	// IMP=0x0010000000078b99
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000078b91
- (id)userInputFields;	// IMP=0x0010000000078b89
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0010000000078b7b

@end
