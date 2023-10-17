//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject
{
    NSXPCConnection *_client;	// 8 = 0x8
    NSString *_claimID;	// 16 = 0x10
    NSString *_purposeIDOrNil;	// 24 = 0x18
    _Bool _cameFromSuperarbiter;	// 32 = 0x20
    unsigned long long _blockageCount;	// 40 = 0x28
    _Bool _didWait;	// 48 = 0x30
    _Bool _isRevoked;	// 49 = 0x31
    NSMutableArray *_claimerBlockageReasons;	// 56 = 0x38
    NSError *_claimerError;	// 64 = 0x40
    NSMutableOrderedSet *_pendingClaims;	// 72 = 0x48
    NSMutableSet *_blockingClaims;	// 80 = 0x50
    NSCountedSet *_blockingReactorIDs;	// 88 = 0x58
    NSMutableArray *_providerCancellationProcedures;	// 96 = 0x60
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;	// 104 = 0x68
    NSMutableArray *_revocationProcedures;	// 112 = 0x70
    NSMutableArray *_devaluationProcedures;	// 120 = 0x78
    NSMutableArray *_finishingProcedures;	// 128 = 0x80
    NSFileAccessProcessManager *_processManager;	// 136 = 0x88
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;	// 144 = 0x90
    _Bool _hasInvokedClaimer;	// 152 = 0x98
    _Bool _shouldEnableMaterializationDuringAccessorBlock;	// 153 = 0x99
    id _claimerOrNil;	// 160 = 0xa0
    CDUnknownBlockType _serverClaimerOrNil;	// 168 = 0xa8
    NSMutableArray *_sandboxTokens;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_arbiterQueue;	// 184 = 0xb8
    id _originatingReactorQueueID;	// 192 = 0xc0
    NSMutableDictionary *_fileHandlesForEvictionProtection;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000058fb42
+ (_Bool)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x001000000058f5d2
+ (_Bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(_Bool)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x001000000058f569
@property _Bool shouldEnableMaterializationDuringAccessorBlock; // @synthesize shouldEnableMaterializationDuringAccessorBlock=_shouldEnableMaterializationDuringAccessorBlock;
@property(readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // @synthesize claimerWaiter=_claimerWaiter;
- (void)_protectIfNecessaryFileAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forReading:(_Bool)arg3;	// IMP=0x000000000059691f
- (void)protectFilesAgainstEviction;	// IMP=0x0000000000596919
- (_Bool)shouldCancelInsteadOfWaiting;	// IMP=0x0000000000596911
@property(readonly, copy) NSArray *allURLs;
- (void)disavowed;	// IMP=0x00000000005967f0
- (void)finished;	// IMP=0x00000000005965ec
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;	// IMP=0x00000000005965e4
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;	// IMP=0x0000000000596425
- (_Bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;	// IMP=0x0000000000596159
- (id)description;	// IMP=0x0000000000596140
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x0000000000595cec
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x0000000000595ce6
- (_Bool)isRevoked;	// IMP=0x0000000000595cdd
- (_Bool)isGranted;	// IMP=0x0000000000595cc5
- (void)devalueOldClaim:(id)arg1;	// IMP=0x0000000000595cbf
- (void)cancelled;	// IMP=0x0000000000595b00
- (void)devalueSelf;	// IMP=0x000000000059581d
- (void)revoked;	// IMP=0x0000000000595508
- (void)invokeClaimer;	// IMP=0x00000000005954d7
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;	// IMP=0x0000000000594434
- (_Bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000593d7a
- (_Bool)canAccessLocations:(id)arg1 forReading:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000593a7b
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(_Bool)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;	// IMP=0x0000000000592f53
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;	// IMP=0x0000000000592ddc
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;	// IMP=0x0000000000592c6a
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;	// IMP=0x000000000059299b
- (void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long *)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long *)arg4 thenContinue:(CDUnknownBlockType)arg5;	// IMP=0x0000000000591f4e
- (void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long *)arg2 thenContinue:(CDUnknownBlockType)arg3;	// IMP=0x00000000005913a4
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;	// IMP=0x0000000000590ea8
- (_Bool)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0000000000590e3b
- (void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(CDUnknownBlockType)arg3;	// IMP=0x0000000000590d53
- (void)granted;	// IMP=0x0000000000590d4d
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000590d45
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000590d3d
- (void)removePendingClaims:(id)arg1;	// IMP=0x0000000000590bc3
- (id)pendingClaims;	// IMP=0x0000000000590ba1
- (void)addPendingClaim:(id)arg1;	// IMP=0x0000000000590b03
- (void)evaluateNewClaim:(id)arg1;	// IMP=0x00000000005909c0
- (void)scheduleBlockedClaim:(id)arg1;	// IMP=0x0000000000590736
- (void)givePriorityToClaim:(id)arg1;	// IMP=0x0000000000590580
- (_Bool)isBlockedByClaimWithPurposeID:(id)arg1;	// IMP=0x0000000000590445
- (_Bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;	// IMP=0x000000000059030b
- (void)removeBlockingReactorID:(id)arg1;	// IMP=0x00000000005902f5
- (void)addBlockingReactorID:(id)arg1;	// IMP=0x00000000005902b8
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x000000000059024e
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000005901ed
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x000000000059018c
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x0000000000590184
- (id)claimerError;	// IMP=0x000000000059016d
- (void)setClaimerError:(id)arg1;	// IMP=0x0000000000590138
- (void)unblockClaimerForReason:(id)arg1;	// IMP=0x00000000005900c8
- (void)blockClaimerForReason:(id)arg1;	// IMP=0x000000000059007c
- (_Bool)didWait;	// IMP=0x0000000000590073
- (void)unblock;	// IMP=0x000000000058ffca
- (void)block;	// IMP=0x000000000058ff98
- (void)startObservingClientState;	// IMP=0x000000000058fd50
- (_Bool)cameFromSuperarbiter;	// IMP=0x000000000058fd47
- (void)setCameFromSuperarbiter;	// IMP=0x000000000058fd3d
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000058fc89
- (void)prepareClaimForGrantingWithArbiterQueue:(id)arg1;	// IMP=0x000000000058fbb6
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000058fbb0
- (int)clientProcessIdentifier;	// IMP=0x000000000058fb8f
- (id)purposeID;	// IMP=0x000000000058fb78
- (id)claimID;	// IMP=0x000000000058fb61
- (id)client;	// IMP=0x000000000058fb4a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000058fa3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000058f994
- (void)dealloc;	// IMP=0x000000000058f857
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;	// IMP=0x000000000058f7af
- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3;	// IMP=0x000000000058f719
- (_Bool)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1;	// IMP=0x000000000058f6ef
- (_Bool)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;	// IMP=0x000000000058f6e2
- (_Bool)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;	// IMP=0x000000000058f663

@end

