//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIRTree : NSObject
{
    struct shared_ptr<_UIRTreeContainerNode> _root;	// 8 = 0x8
    struct _NSRange _allIndexesRange;	// 24 = 0x18
    NSMutableIndexSet *_allIndexes;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000294252
- (void).cxx_destruct;	// IMP=0x0000000000294205
- (struct CGRect)_frameForIndex:(long long)arg1;	// IMP=0x00000000002940ab
- (id)description;	// IMP=0x00000000002937d7
- (id)init;	// IMP=0x0000000000293676

@end
