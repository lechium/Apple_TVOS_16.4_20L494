//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID, PKDatabase;

@interface PKDQuery : NSObject
{
    NSDictionary *_criteria;	// 8 = 0x8
    unsigned long long _interval;	// 16 = 0x10
    NSString *_signpostIdentifier;	// 24 = 0x18
    PKDatabase *_database;	// 32 = 0x20
    NSUUID *_discoveryUUID;	// 40 = 0x28
}

+ (id)queryWithCriteria:(id)arg1 discoveryUUID:(id)arg2 database:(id)arg3;	// IMP=0x00400000000183dc
- (void).cxx_destruct;	// IMP=0x002000000001a1fb
@property(retain, nonatomic) NSUUID *discoveryUUID; // @synthesize discoveryUUID=_discoveryUUID;
@property(readonly) __weak PKDatabase *database; // @synthesize database=_database;
@property(copy) NSString *signpostIdentifier; // @synthesize signpostIdentifier=_signpostIdentifier;
@property unsigned long long interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDictionary *criteria; // @synthesize criteria=_criteria;
- (id)_findPlugInsWithIdentifier:(id)arg1;	// IMP=0x0010000000019f32
- (id)_findPlugInsWithExtensionPoints:(id)arg1 platforms:(id)arg2;	// IMP=0x0010000000019d1c
- (id)_findPlugInsWithExtensionPoint:(id)arg1 platforms:(id)arg2;	// IMP=0x00100000000199ed
- (id)_allPlugIns;	// IMP=0x0010000000019940
- (id)_findPlugInsFromEnumerator:(id)arg1;	// IMP=0x0010000000019616
- (_Bool)_allowPlugInForRecord:(id)arg1;	// IMP=0x001000000001957a
- (id)_filterDictForRecord:(id)arg1;	// IMP=0x0010000000019413
- (id)_electionPatternAsArray;	// IMP=0x001000000001912d
- (id)_lsPattern:(id)arg1;	// IMP=0x001000000001903a
- (void)_safelyAddPlugIn:(id)arg1 toSet:(id)arg2;	// IMP=0x0010000000018fb0
- (_Bool)_needsFilter;	// IMP=0x0010000000018f7d
- (id)_findPlugIns;	// IMP=0x0010000000018c41
- (_Bool)criteriaIsSimple;	// IMP=0x0010000000018a7a
- (void)signpostEnd;	// IMP=0x0010000000018958
- (void)signpostBegin;	// IMP=0x001000000001877c
- (id)findPlugIns;	// IMP=0x001000000001876a
- (_Bool)allowPlugInWithBundleIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x001000000001847c

@end

