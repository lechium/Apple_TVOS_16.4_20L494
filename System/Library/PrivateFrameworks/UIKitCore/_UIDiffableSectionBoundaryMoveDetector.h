//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol _UIDiffableDataSourceState, _UIIdentifierDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableSectionBoundaryMoveDetector : NSObject
{
    id <_UIIdentifierDiffer> _differ;	// 8 = 0x8
    id <_UIDiffableDataSourceState> _beforeState;	// 16 = 0x10
    id <_UIDiffableDataSourceState> _afterState;	// 24 = 0x18
    NSSet *_movePairs;	// 32 = 0x20
    _Bool _didShortCircuit;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000811d0a
@property(readonly, nonatomic) _Bool didShortCircuit; // @synthesize didShortCircuit=_didShortCircuit;
@property(readonly, nonatomic) NSSet *movePairs; // @synthesize movePairs=_movePairs;
- (id)_computeMovePairsFoundation;	// IMP=0x00000000008113ee
- (id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3;	// IMP=0x00000000008112df

@end

