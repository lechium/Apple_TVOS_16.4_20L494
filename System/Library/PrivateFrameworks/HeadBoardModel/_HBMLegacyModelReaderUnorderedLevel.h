//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBMItemID, NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface _HBMLegacyModelReaderUnorderedLevel : NSObject
{
    NSArray *_items;	// 8 = 0x8
    NSIndexSet *_unarrangedIndices;	// 16 = 0x10
    HBMItemID *_parentItemID;	// 24 = 0x18
}

+ (id)levelWithItems:(id)arg1 unarrangedIndices:(id)arg2 parentItemID:(id)arg3;	// IMP=0x0060000000009077
- (void).cxx_destruct;	// IMP=0x000000000000916b
@property(readonly, copy, nonatomic) HBMItemID *parentItemID; // @synthesize parentItemID=_parentItemID;
@property(readonly, copy, nonatomic) NSIndexSet *unarrangedIndices; // @synthesize unarrangedIndices=_unarrangedIndices;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;

@end

