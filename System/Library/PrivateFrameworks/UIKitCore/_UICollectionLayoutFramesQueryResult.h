//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutItem, NSUUID;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutFramesQueryResult : NSObject
{
    _Bool _isFrameAdjustedForPinning;	// 8 = 0x8
    long long _index;	// 16 = 0x10
    long long _zIndex;	// 24 = 0x18
    long long _resultKind;	// 32 = 0x20
    NSCollectionLayoutItem *_item;	// 40 = 0x28
    NSUUID *_supplementaryEnrollmentIdentifier;	// 48 = 0x30
    long long _auxillaryKind;	// 56 = 0x38
    struct CGRect _frame;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000027546e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000274ec0
- (id)description;	// IMP=0x0000000000274d19

@end
