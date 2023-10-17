//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNCalculatesMultiValueDiff : NSObject
{
    NSArray *_multiValue1;	// 8 = 0x8
    NSArray *_multiValue2;	// 16 = 0x10
    NSOrderedSet *_originalIdentifiers;	// 24 = 0x18
    NSOrderedSet *_finalIdentifiers;	// 32 = 0x20
    NSMutableOrderedSet *_addedIdentifiers;	// 40 = 0x28
    NSMutableOrderedSet *_removedIdentifiers;	// 48 = 0x30
    NSMutableOrderedSet *_sameIdentifiers;	// 56 = 0x38
    NSMutableOrderedSet *_calculatedFinalIdentifiers;	// 64 = 0x40
    NSMutableArray *_updates;	// 72 = 0x48
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;	// IMP=0x006000000001d61d
- (void).cxx_destruct;	// IMP=0x000000000001e361
- (id)updates;	// IMP=0x000000000001e353
- (void)calculateDiff;	// IMP=0x000000000001e2bd
- (void)appendReorderUpdates;	// IMP=0x000000000001e15d
- (void)appendReplaceUpdates;	// IMP=0x000000000001df19
- (void)appendAddUpdates;	// IMP=0x000000000001dd3e
- (void)appendRemoveUpdates;	// IMP=0x000000000001db63
- (void)setupCalculatedFinalIdentifiers;	// IMP=0x000000000001dafd
- (void)setupSameIdentifiers;	// IMP=0x000000000001daa9
- (void)setupAddedIdentifiers;	// IMP=0x000000000001da55
- (void)setupRemovedIdentifiers;	// IMP=0x000000000001da01
- (void)setupFinalIdentifiers;	// IMP=0x000000000001d922
- (void)setupOriginalIdentifiers;	// IMP=0x000000000001d843
- (id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2;	// IMP=0x000000000001d781

@end

