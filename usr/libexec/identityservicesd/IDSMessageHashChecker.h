//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSMessageHashStore, IDSRegistrationKeyManager;

@interface IDSMessageHashChecker : NSObject
{
    _Bool _usePairingKey;	// 8 = 0x8
    IDSRegistrationKeyManager *_registrationKeyManager;	// 16 = 0x10
    IDSMessageHashStore *_messageHashStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001fa5a0
@property(retain, nonatomic) IDSMessageHashStore *messageHashStore; // @synthesize messageHashStore=_messageHashStore;
@property(nonatomic) _Bool usePairingKey; // @synthesize usePairingKey=_usePairingKey;
@property(readonly, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
- (id)_legacyIdentity;	// IMP=0x00100000001fa3f0
- (_Bool)allowMessageData:(id)arg1 withDelayedCommitBlock:(CDUnknownBlockType *)arg2;	// IMP=0x00100000001fa110
- (_Bool)allowMessageData:(id)arg1;	// IMP=0x00100000001f9f50
- (id)initWithRegistrationKeyManager:(id)arg1 messageHashStore:(id)arg2 usePairingKey:(_Bool)arg3;	// IMP=0x00100000001f9e40
- (id)initWithRegistrationKeyManager:(id)arg1;	// IMP=0x00100000001f9d70

@end
