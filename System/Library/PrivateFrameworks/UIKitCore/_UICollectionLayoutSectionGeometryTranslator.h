//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject
{
    unsigned long long _layoutAxis;	// 8 = 0x8
    _Bool _layoutRTL;	// 16 = 0x10
    struct CGPoint _contentFrameOffset;	// 24 = 0x18
    struct NSDirectionalEdgeInsets _sectionInsets;	// 40 = 0x28
    struct CGRect _contentFrame;	// 72 = 0x48
    struct CGRect _effectiveFrame;	// 104 = 0x68
    struct CGSize _primaryContentSize;	// 136 = 0x88
    struct CGSize _contentSizeIncludingSupplementaries;	// 152 = 0x98
    struct CGRect _primaryContentFrame;	// 168 = 0xa8
}

- (id)description;	// IMP=0x0000000000277c37

@end

