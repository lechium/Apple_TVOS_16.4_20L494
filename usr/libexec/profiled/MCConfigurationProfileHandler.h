//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfileServiceProfileHandler;

@interface MCConfigurationProfileHandler
{
    MCProfileServiceProfileHandler *_OTAHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001c1f9
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x001000000001c165
- (void)unsetAside;	// IMP=0x001000000001c114
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x001000000001c0a4
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000001c00e
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000001becf
- (id)initWithProfile:(id)arg1;	// IMP=0x001000000001be13

@end

