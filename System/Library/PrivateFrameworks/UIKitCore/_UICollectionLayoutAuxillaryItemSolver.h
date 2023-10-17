//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSSet, _UICollectionLayoutAuxillaryOffsets, _UIRTree;
@protocol _UICollectionLayoutAuxillaryHosting;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryItemSolver : NSObject
{
    long long _memoizedSupplementaryKind;	// 8 = 0x8
    NSArray *_memoizedAuxillaryItems;	// 16 = 0x10
    NSSet *_elementKinds;	// 24 = 0x18
    _Bool _hasEstimatedSizes;	// 32 = 0x20
    NSIndexSet *_pinnedSupplementaryIndexes;	// 40 = 0x28
    _UICollectionLayoutAuxillaryOffsets *_supplementariesThatCanAffectContentSize;	// 48 = 0x30
    unsigned long long _containerSizeDependentAxes;	// 56 = 0x38
    id <_UICollectionLayoutAuxillaryHosting> _auxillaryHost;	// 64 = 0x40
    NSArray *_frames;	// 72 = 0x48
    NSArray *_unpinnedFrames;	// 80 = 0x50
    NSDictionary *_enrolledSupplementaryFramesDict;	// 88 = 0x58
    NSDictionary *_supplementaryFramesKeyedByKindIndex;	// 96 = 0x60
    _UIRTree *_supplementaryItemGeometricIndexer;	// 104 = 0x68
    struct CGSize _contentSize;	// 112 = 0x70
    struct CGPoint _hostContentOffset;	// 128 = 0x80
    struct NSDirectionalEdgeInsets _hostContentSizeInsets;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000290df9

@end
