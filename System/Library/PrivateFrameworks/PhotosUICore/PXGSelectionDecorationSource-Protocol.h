//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSIndexSet, PXGLayout;

@protocol PXGSelectionDecorationSource <PXGLayoutContentSource>
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSIndexSet *)selectedSpriteIndexesInLayout:(PXGLayout *)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(PXGLayout *)arg1;
- (long long)selectionDecorationStyleInLayout:(PXGLayout *)arg1;
@end

