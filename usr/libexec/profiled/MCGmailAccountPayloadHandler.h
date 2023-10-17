//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MCGmailAccountPayloadHandler
{
    NSDictionary *_setAsideAccountDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007071c
@property(retain, nonatomic) NSDictionary *setAsideAccountDictionary; // @synthesize setAsideAccountDictionary=_setAsideAccountDictionary;
- (void)unsetAside;	// IMP=0x0010000000070673
- (void)setAside;	// IMP=0x00100000000702bf
- (void)remove;	// IMP=0x001000000007021b
- (void)_remove;	// IMP=0x001000000006fb60
- (_Bool)isInstalled;	// IMP=0x001000000006f8d8
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000006f3e9
- (id)_installWithAccountDictionary:(id)arg1;	// IMP=0x001000000006eefa
- (id)accountDictionaryWithIsInstalledByMDM:(_Bool)arg1 personaID:(id)arg2 rmAccountIdentifier:(id)arg3;	// IMP=0x001000000006eac2
- (id)MCACAccountIdentifier;	// IMP=0x001000000006ea72
- (id)unhashedAccountIdentifier;	// IMP=0x001000000006e9dd
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x001000000006e9ae

@end
