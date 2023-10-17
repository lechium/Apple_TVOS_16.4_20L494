//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualTreeNode
{
    NSArray *_children;	// 8 = 0x8
    unsigned long long _axis;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002731eb
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (_Bool)isVerticalGroup;	// IMP=0x000000000027318f
- (_Bool)isHorizontalGroup;	// IMP=0x000000000027317a
- (id)description;	// IMP=0x000000000027302f
- (id)initWithParent:(id)arg1 children:(id)arg2 axis:(unsigned long long)arg3;	// IMP=0x0000000000272f68

@end

