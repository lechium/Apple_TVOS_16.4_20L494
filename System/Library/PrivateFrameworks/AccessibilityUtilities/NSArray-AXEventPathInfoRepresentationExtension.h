//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class AXEventPathInfoRepresentation;

@interface NSArray (AXEventPathInfoRepresentationExtension)
+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;	// IMP=0x00200000000f79b0
+ (id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1;	// IMP=0x00200000000f77a0
@property(readonly, nonatomic) AXEventPathInfoRepresentation *firstPath;
- (id)axSafeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000f87f0
- (id)axFirstObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f84a0
- (id)axFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f82b0
- (id)axMapObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f8060
- (_Bool)axIsEqualToOrderedArray:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f7ec0
- (id)axUniqueArrayWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f7b90
@end

