//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKSEPKey.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface TKRemoteSEPKey : TKSEPKey
{
    id _keyType;	// 8 = 0x8
    long long _keySize;	// 16 = 0x10
    _Bool _systemKey;	// 24 = 0x18
    NSData *_publicKey;	// 32 = 0x20
    id _accessControl;	// 40 = 0x28
    _Bool _forceSystemSession;	// 48 = 0x30
    id _keyID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000273cd
@property(readonly, nonatomic) id keyID; // @synthesize keyID=_keyID;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000270ee
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000026ceb
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000269a1
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002668d
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026379
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x00000000000260c5
- (struct __SecAccessControl *)accessControl;	// IMP=0x00000000000260b4
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x000000000002609f
- (_Bool)systemKey;	// IMP=0x000000000002608f
- (long long)keySize;	// IMP=0x000000000002607e
- (id)keyType;	// IMP=0x0000000000026069
- (id)objectID;	// IMP=0x0000000000026057
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 forceSystemSession:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0000000000025b1f
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 forceSystemSession:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000025765
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025332
- (_Bool)processServerAtributes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025055

@end

