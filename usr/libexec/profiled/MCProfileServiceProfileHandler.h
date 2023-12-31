//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MCProfileServiceProfileHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
    NSData *_persistentID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000006b76a
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x001000000006b669
- (void)unsetAside;	// IMP=0x001000000006b585
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x001000000006b4a1
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000006b215
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000006b026
- (id)fetchFinalProfileWithClient:(id)arg1 outProfileData:(id *)arg2 outError:(id *)arg3;	// IMP=0x001000000006a23a
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000006a163
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000006a08c
- (id)_badIdentityError;	// IMP=0x001000000006a00b
- (void)dealloc;	// IMP=0x0010000000069fc5
- (id)initWithProfile:(id)arg1;	// IMP=0x0010000000069ef2

@end

