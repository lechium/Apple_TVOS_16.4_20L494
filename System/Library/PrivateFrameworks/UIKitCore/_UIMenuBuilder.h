//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIMenuSystem;

__attribute__((visibility("hidden")))
@interface _UIMenuBuilder : NSObject
{
    CDStruct_de35aa0b _analysis;	// 8 = 0x8
    NSArray *_keyCommandsCache;	// 56 = 0x38
    UIMenuSystem *_system;	// 64 = 0x40
    unsigned long long __changeCount;	// 72 = 0x48
    unsigned long long __actualChangeCount;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000cd5743
@property(readonly, nonatomic) unsigned long long _actualChangeCount; // @synthesize _actualChangeCount=__actualChangeCount;
@property(readonly, nonatomic) unsigned long long _changeCount; // @synthesize _changeCount=__changeCount;
@property(nonatomic) __weak UIMenuSystem *system; // @synthesize system=_system;
- (void)removeMenuForIdentifier:(id)arg1;	// IMP=0x0000000000cd52a6
- (void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;	// IMP=0x0000000000cd5132
- (void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;	// IMP=0x0000000000cd4fb0
- (void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;	// IMP=0x0000000000cd4b16
- (void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;	// IMP=0x0000000000cd467f
- (void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cd3eec
- (void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000cd3dd6
- (void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;	// IMP=0x0000000000cd2e10
- (void)_replaceMenu:(id)arg1 withMenu:(id)arg2;	// IMP=0x0000000000cd2b84
- (_Bool)_isInternallyConsistent;	// IMP=0x0000000000cd2a23
- (id)_firstValidMenuWithinIdentifiers:(id)arg1;	// IMP=0x0000000000cd2890
- (id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2;	// IMP=0x0000000000cd2754
@property(readonly, nonatomic) NSArray *_keyCommands;
- (void)_recacheCommandsIfNeeded;	// IMP=0x0000000000cd2478
- (void)_setNeedsRecacheCommands;	// IMP=0x0000000000cd245e
- (id)commandForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x0000000000cd2448
- (id)actionForIdentifier:(id)arg1;	// IMP=0x0000000000cd2432
- (id)menuForIdentifier:(id)arg1;	// IMP=0x0000000000cd241c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd231d
- (id)initWithRootMenu:(id)arg1;	// IMP=0x0000000000cd2006
- (id)initWithSystem:(id)arg1 analysis:(CDStruct_de35aa0b)arg2;	// IMP=0x0000000000cd1ee0
- (void)_patch:(id)arg1;	// IMP=0x0000000000d412e1
- (void)_patchInternalDiff:(id)arg1;	// IMP=0x0000000000d3fda1
- (id)_internalDiffForDiffv1:(id)arg1;	// IMP=0x0000000000d3f351

@end

