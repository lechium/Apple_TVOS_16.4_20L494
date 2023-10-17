//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, NSString, _UITreeDataSourceSnapshotter;

@protocol _UITreeDataSourceSnapshotter
- (NSString *)visualDescription;
- (_UITreeDataSourceSnapshotter *)snapshotterRepresentingSubtreeForIndex:(long long)arg1 includingParent:(_Bool)arg2;
- (_UITreeDataSourceSnapshotter *)snapshotterRepresentingSubtreeForIndex:(long long)arg1;
- (_Bool)hasChildrenForParentAtIndex:(long long)arg1;
- (_Bool)indexIsExpanded:(long long)arg1;
- (_Bool)indexIsVisible:(long long)arg1;
- (NSIndexSet *)childrenForParentAtIndex:(long long)arg1 recursive:(_Bool)arg2;
- (NSIndexSet *)childrenForParentAtIndex:(long long)arg1;
- (long long)parentForChildAtIndex:(long long)arg1;
- (NSIndexSet *)indexesForLevel:(long long)arg1;
- (long long)levelForIndex:(long long)arg1;
- (_Bool)isFlat;
- (NSIndexSet *)visibleIndexes;
- (NSIndexSet *)expandedIndexes;
- (NSIndexSet *)rootIndexes;
- (long long)count;
@end

