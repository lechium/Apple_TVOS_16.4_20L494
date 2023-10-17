//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSSet, NSString, SOSAccount;

@interface SOSAccountTransaction : NSObject
{
    _Bool _initialInCircle;	// 8 = 0x8
    _Bool _initialTrusted;	// 9 = 0x9
    _Bool _quiet;	// 10 = 0xa
    unsigned int _initialCirclePeerCount;	// 12 = 0xc
    SOSAccount *_account;	// 16 = 0x10
    NSSet *_initialViews;	// 24 = 0x18
    NSSet *_initialUnsyncedViews;	// 32 = 0x20
    NSString *_initialID;	// 40 = 0x28
    NSData *_initialKeyParameters;	// 48 = 0x30
    NSMutableSet *_peersToRequestSync;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001f7ca3
@property(retain) NSMutableSet *peersToRequestSync; // @synthesize peersToRequestSync=_peersToRequestSync;
@property _Bool quiet; // @synthesize quiet=_quiet;
@property unsigned int initialCirclePeerCount; // @synthesize initialCirclePeerCount=_initialCirclePeerCount;
@property(retain) NSData *initialKeyParameters; // @synthesize initialKeyParameters=_initialKeyParameters;
@property _Bool initialTrusted; // @synthesize initialTrusted=_initialTrusted;
@property(retain) NSString *initialID; // @synthesize initialID=_initialID;
@property(retain) NSSet *initialUnsyncedViews; // @synthesize initialUnsyncedViews=_initialUnsyncedViews;
@property(retain) NSSet *initialViews; // @synthesize initialViews=_initialViews;
@property _Bool initialInCircle; // @synthesize initialInCircle=_initialInCircle;
@property(retain) SOSAccount *account; // @synthesize account=_account;
- (void)requestSyncWithPeers:(id)arg1;	// IMP=0x00100000001f7ab0
- (void)requestSyncWith:(id)arg1;	// IMP=0x00100000001f79dd
- (void)finish;	// IMP=0x00100000001f5f0a
- (void)restart;	// IMP=0x00100000001f5edc
- (void)start;	// IMP=0x00100000001f5a83
- (id)initWithAccount:(id)arg1 quiet:(_Bool)arg2;	// IMP=0x00100000001f59fb
@property(readonly) NSString *description;
- (void)updateSOSCircleCachedStatus;	// IMP=0x00100000001f5786
- (unsigned long long)currentTrustBitmask;	// IMP=0x00100000001f5677

@end

