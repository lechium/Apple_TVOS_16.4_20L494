//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface ADSyncBlacklist : NSObject
{
    NSDictionary *_cachedTimeoutTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000009be8c
- (void).cxx_destruct;	// IMP=0x002000000009dbdf
- (void)_saveTimeouts:(id)arg1;	// IMP=0x001000000009dacf
- (void)saveTimeouts:(id)arg1;	// IMP=0x001000000009da27
- (id)_timeouts:(id)arg1 expiringAfter:(id)arg2;	// IMP=0x001000000009d8f0
- (id)_timeoutsExpiringAfter:(id)arg1;	// IMP=0x001000000009d8d7
- (id)timeoutsExpiringAfter:(id)arg1;	// IMP=0x001000000009d775
- (void)filterBlacklistedKeys:(id)arg1 appSources:(id)arg2;	// IMP=0x001000000009d2be
- (void)filterBlacklistedKeys:(id)arg1 vocabSources:(id)arg2;	// IMP=0x001000000009cd70
- (void)filterBlacklistedAnchorsFrom:(id)arg1 includingNewRestrictionsFromResponse:(id)arg2;	// IMP=0x001000000009c735
- (void)checkPermissionToSyncSlot:(id)arg1 forApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009c4b8
- (void)checkIfAnyUserVocabularyIsBlacklistedForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c162
- (id)_storePath;	// IMP=0x001000000009c114
- (id)init;	// IMP=0x001000000009bf11

@end

