//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface USKNodeSiblingIterator : NSObject
{
    struct iterator_range<pxrInternal_v0_21__aapl__pxrReserved__::UsdPrimSiblingIterator> _range;	// 8 = 0x8
    struct UsdPrimSiblingIterator _it;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000057fe1
- (void).cxx_destruct;	// IMP=0x0000000000057f8d
- (id)nextObject;	// IMP=0x0000000000057dd9
- (id)initWithPrim:(const void *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;	// IMP=0x0000000000057ce4
- (id)initWithPrim:(const void *)arg1;	// IMP=0x0000000000057baa
- (id)initWithSiblingRange:(const void *)arg1;	// IMP=0x00000000000579be

@end

