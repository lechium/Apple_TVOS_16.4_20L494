//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSelectionController : NSObject
{
    NSMutableSet *_selectedIndexPaths;	// 8 = 0x8
    NSMutableSet *_highlightedIndexPaths;	// 16 = 0x10
    NSMutableSet *_nonvisibleTrackedSelectedIdentifiers;	// 24 = 0x18
    _Bool _allowsMultipleSelection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000dcdddd
- (id)init;	// IMP=0x0000000000dccbf8

@end

