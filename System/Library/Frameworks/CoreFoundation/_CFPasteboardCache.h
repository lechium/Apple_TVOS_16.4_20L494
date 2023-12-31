//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardCache : NSObject
{
    struct __CFArray *orderedEntries;	// 8 = 0x8
    struct __CFDictionary *entriesByItemIdentifier;	// 16 = 0x10
    struct __CFDictionary *indexesByItemIdentifier;	// 24 = 0x18
    struct __CFArray *itemArray;	// 32 = 0x20
    int generation;	// 40 = 0x28
    int changeCount;	// 44 = 0x2c
}

@property(readonly) const struct __CFArray *orderedEntries; // @synthesize orderedEntries;
@property int changeCount; // @synthesize changeCount;
@property(readonly) int generation; // @synthesize generation;
- (void)bumpChangeCount;	// IMP=0x000000000006cc18
- (int)indexForItem:(int)arg1;	// IMP=0x000000000006cbe3
- (CDStruct_6ea78fe2)copyFlavorsForItemIdentifier:(long long)arg1;	// IMP=0x000000000006ca18
- (CDStruct_b6748e3c)flavorCountForItemIdentifier:(long long)arg1;	// IMP=0x000000000006c89c
- (CDStruct_b6748e3c)itemAtIndex:(long long)arg1;	// IMP=0x000000000006c829
- (CDStruct_b6748e3c)itemCount;	// IMP=0x000000000006c7eb
- (CDStruct_9e943ef1)copyItemsAndFlavors;	// IMP=0x000000000006c5db
- (id)entryForGeneration:(int)arg1 itemIdentifier:(int)arg2 flavor:(struct __CFString *)arg3 errorCode:(int *)arg4;	// IMP=0x000000000006c450
- (void)clearForGeneration:(int)arg1;	// IMP=0x000000000006c416
- (id)updateEntry:(id)arg1;	// IMP=0x000000000006c1a3
- (void)addEntry:(id)arg1;	// IMP=0x000000000006c0b7
- (void)dealloc;	// IMP=0x000000000006c02b
- (id)init;	// IMP=0x000000000006bf40
- (void)prepareDataForItemIdentifier:(long long)arg1 flavor:(struct __CFString *)arg2;	// IMP=0x0000000000090c83
- (void)prepareMetadata;	// IMP=0x0000000000090c82

@end

