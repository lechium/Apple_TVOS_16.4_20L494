//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDOperation, NSArray, NSMutableArray;

@interface CKDPublicIdentityLookupRequest : NSObject
{
    CKDOperation *_operation;	// 8 = 0x8
    NSArray *_lookupInfosToFetch;	// 16 = 0x10
    NSMutableArray *_missingLookupInfos;	// 24 = 0x18
    _Bool _isCancelled;	// 32 = 0x20
    _Bool _hasPerformed;	// 33 = 0x21
    unsigned long long _fetchBatchSize;	// 40 = 0x28
    CDUnknownBlockType _perLookupInfoProgressBlock;	// 48 = 0x30
    CDUnknownBlockType _lookupCompletionBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000272a10
@property _Bool hasPerformed; // @synthesize hasPerformed=_hasPerformed;
@property(copy, nonatomic) CDUnknownBlockType lookupCompletionBlock; // @synthesize lookupCompletionBlock=_lookupCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perLookupInfoProgressBlock; // @synthesize perLookupInfoProgressBlock=_perLookupInfoProgressBlock;
@property(nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (id)ckShortDescription;	// IMP=0x000000000027285a
- (id)description;	// IMP=0x0000000000272848
- (id)CKPropertiesDescription;	// IMP=0x0000000000272836
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000272644
- (_Bool)_tryComplete;	// IMP=0x00000000002725a7
- (id)_generateOONPrivateKeyWithError:(id *)arg1;	// IMP=0x0000000000272362
- (id)spawnURLRequests;	// IMP=0x00000000002718c9
- (void)performRequest;	// IMP=0x0000000000270b05
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;	// IMP=0x0000000000270ae9
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;	// IMP=0x0000000000270852
- (void)cancel;	// IMP=0x000000000027083b
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2;	// IMP=0x0000000000270797

@end

