//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKSEPKey.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TKLocalSEPKey : TKSEPKey
{
    id _keyHolder;	// 8 = 0x8
    id _accessControl;	// 16 = 0x10
    id _keyType;	// 24 = 0x18
    NSXPCConnection *_caller;	// 32 = 0x20
}

+ (void)set_testing_callerEntitlements:(id)arg1;	// IMP=0x006000000001d8c4
+ (void)setupKeybagForTesting:(_Bool)arg1;	// IMP=0x006000000001d8be
+ (_Bool)hasSEP;	// IMP=0x006000000001d8b6
+ (void)setContextErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x006000000001d8b0
+ (void)runsInSystemSession;	// IMP=0x006000000001d8aa
- (void).cxx_destruct;	// IMP=0x000000000001dfd4
@property(readonly, nonatomic) NSXPCConnection *caller; // @synthesize caller=_caller;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000001df71
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001df1f
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001decd
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001dd97
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001dd26
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x000000000001dc8a
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x000000000001dc82
- (id)objectID;	// IMP=0x000000000001dc5e
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 forceSystemSession:(_Bool)arg7 error:(id *)arg8;	// IMP=0x000000000001daa8
- (struct __SecAccessControl *)accessControl;	// IMP=0x000000000001da97
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 forceSystemSession:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000001d917
- (_Bool)systemKey;	// IMP=0x000000000001d90f
- (id)keyType;	// IMP=0x000000000001d8fa
- (long long)keySize;	// IMP=0x000000000001d8db
@property(readonly, nonatomic) struct __SecKey *key;

@end
