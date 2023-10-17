//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCExtensibleSingleSignOnPayloadHandler
{
}

+ (_Bool)_writeConfiguration:(id)arg1 withError:(id *)arg2;	// IMP=0x004000000007acaf
+ (id)_configurationForPayloads:(id)arg1 includingPayloads:(id)arg2 excludingPayloads:(id)arg3 error:(id *)arg4;	// IMP=0x001000000007974a
+ (_Bool)rebuildConfigurationIncludingPayloads:(id)arg1 excludingPayloads:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000795b4
- (void)unsetAside;	// IMP=0x0040000000079458
- (void)setAside;	// IMP=0x00100000000792bd
- (void)remove;	// IMP=0x0010000000078fea
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000078e1f

@end

