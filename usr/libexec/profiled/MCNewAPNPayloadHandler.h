//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewAPNPayloadHandler
{
}

- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x004000000003ff74
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000003ff62
- (void)_sendNotifications;	// IMP=0x001000000003fe5a
- (void)unsetAside;	// IMP=0x001000000003fdee
- (void)setAside;	// IMP=0x001000000003fd82
- (void)remove;	// IMP=0x001000000003fcc0
- (void)_remove;	// IMP=0x001000000003fbfc
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000003f8ea
- (_Bool)_hasAPNManagedPreferences;	// IMP=0x001000000003f85a
- (_Bool)_install;	// IMP=0x001000000003f7b4
- (void)_notifyCoreTelephonyOfAPNChange;	// IMP=0x001000000003f6f2

@end

