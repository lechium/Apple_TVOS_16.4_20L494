//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKVStore;

@interface IDSPublicIdentityCache : NSObject
{
    IDSKVStore *_kvStore;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000016b50
- (void).cxx_destruct;	// IMP=0x00200000000180c0
- (void)deleteCache;	// IMP=0x0010000000018090
- (_Bool)cleanupWithError:(id *)arg1;	// IMP=0x0010000000017be0
- (id)identityForToken:(id)arg1 uri:(id)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000017630
- (_Bool)addIdentity:(id)arg1 forToken:(id)arg2 uri:(id)arg3 service:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000017240
- (id)identityDataForToken:(id)arg1 uri:(id)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000017100
- (_Bool)addIdentityData:(id)arg1 forToken:(id)arg2 uri:(id)arg3 service:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000016fd0
- (id)keyForToken:(id)arg1 uri:(id)arg2 service:(id)arg3;	// IMP=0x0010000000016ea0
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000016db0
- (id)init;	// IMP=0x0010000000016c10

@end
