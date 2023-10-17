//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeClassificationResult.h"

@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult
{
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;	// 8 = 0x8
    NSMutableDictionary *_substrokesByStrokeIdentifier;	// 16 = 0x10
    NSMutableSet *_nontextCandidates;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000018cea0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018ce50
- (void)updateByAddingClutterStroke:(id)arg1;	// IMP=0x000000000018cdd0
- (void)updateByAddingNonClutterStroke:(id)arg1 withClassification:(long long)arg2;	// IMP=0x000000000018cc00
- (id)nontextCandidates;	// IMP=0x000000000018cbe0
- (id)substrokesByStrokeIdentifier;	// IMP=0x000000000018cbc0
- (id)strokeClassificationsByStrokeIdentifier;	// IMP=0x000000000018cba0
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(_Bool)arg3;	// IMP=0x000000000018c370
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;	// IMP=0x000000000018c2b0
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;	// IMP=0x000000000018c200
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;	// IMP=0x000000000018bde0
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;	// IMP=0x000000000018ba90
- (id)init;	// IMP=0x000000000018b9c0

@end

