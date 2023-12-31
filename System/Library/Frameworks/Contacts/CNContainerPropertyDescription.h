//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContainerPropertyDescription : NSObject
{
}

- (_Bool)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2;	// IMP=0x0000000000007a26
- (id)nilValue;	// IMP=0x00000000000079e0
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x0000000000007990
- (id)CNValueForContainer:(id)arg1;	// IMP=0x000000000000794a
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000078ba
@property(readonly, nonatomic) Class valueClass;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, copy, nonatomic) NSString *key;
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000003c2d3
- (void *)ABValueForABSource:(void *)arg1;	// IMP=0x000000000003c297
- (_Bool)isConvertibleABValue:(void *)arg1;	// IMP=0x000000000003c28f
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000003c282
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000003c279
- (int)abPropertyID;	// IMP=0x000000000003c247

@end

