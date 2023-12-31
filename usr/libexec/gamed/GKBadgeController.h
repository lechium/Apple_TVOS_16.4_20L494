//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKBadgeController : NSObject
{
    NSMutableDictionary *_badgeDictionaries[4];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    _Bool _dirty;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x004000000013afaa
- (void).cxx_destruct;	// IMP=0x002000000013db00
- (void)registerBadgePermissionForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013d753
- (void)unbadgeAllApplications;	// IMP=0x001000000013d4ad
- (void)badgeAllApplications;	// IMP=0x001000000013d1b6
- (void)setBadgeCount:(unsigned long long)arg1 forBundleID:(id)arg2 badgeType:(unsigned long long)arg3;	// IMP=0x001000000013cc00
- (unsigned long long)_totalBadgeCountForBundleID:(id)arg1;	// IMP=0x001000000013c9dc
- (unsigned long long)badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x001000000013c73e
- (unsigned long long)_badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x001000000013c527
- (id)_dictionaryForBadgeType:(unsigned long long)arg1;	// IMP=0x001000000013c378
- (void)badgeBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x001000000013bf10
- (void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x001000000013b969
- (_Bool)isBadgingEnabledForBundleID:(id)arg1;	// IMP=0x001000000013b8bb
- (void)synchronize;	// IMP=0x001000000013b140
- (id)_plistKeyForBadgeType:(unsigned long long)arg1;	// IMP=0x001000000013b11b
- (id)init;	// IMP=0x001000000013b0b3
- (id)_badgeCountURL;	// IMP=0x001000000013afff

@end

