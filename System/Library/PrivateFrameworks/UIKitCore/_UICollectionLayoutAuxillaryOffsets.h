//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryOffsets : NSObject
{
    NSMutableDictionary *_offsets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000277a18
- (_Bool)containsIndex:(long long)arg1 forElementKind:(id)arg2;	// IMP=0x00000000002779c2
- (_Bool)overlapsOffsets:(id)arg1;	// IMP=0x00000000002777b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002775d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002775a8
- (long long)offsetForElementKind:(id)arg1;	// IMP=0x00000000002774f2
- (id)indexesForElementKind:(id)arg1;	// IMP=0x00000000002773dd
- (struct _NSRange)rangeForElementKind:(id)arg1;	// IMP=0x00000000002772d0
- (id)offsetsByRebasingOnOffsets:(id)arg1;	// IMP=0x0000000000276d68
- (id)offsetsByApplyingOffsets:(id)arg1;	// IMP=0x0000000000276960
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000002766a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
