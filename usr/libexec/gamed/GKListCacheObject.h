//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSString;

@interface GKListCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0040000000156c13
+ (Class)entryClass;	// IMP=0x0010000000156c02
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000158198
- (id)entryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000157f62
- (id)findEntry:(CDUnknownBlockType)arg1;	// IMP=0x0010000000157cc4
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;	// IMP=0x001000000015747e
- (void)removeEntriesMatchingPredicate:(id)arg1;	// IMP=0x0010000000157220
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;	// IMP=0x0010000000156fff
- (id)internalRepresentation;	// IMP=0x0010000000156cad
- (void)updateSeed;	// IMP=0x0010000000156c37

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end
