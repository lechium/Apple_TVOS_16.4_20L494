//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface _IFValueTransformer : NSValueTransformer
{
    CDUnknownBlockType _forwardTransformation;	// 8 = 0x8
    CDUnknownBlockType _reverseTransformation;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0060000000001063
- (void).cxx_destruct;	// IMP=0x0000000000001032
@property(readonly, copy, nonatomic) CDUnknownBlockType reverseTransformation; // @synthesize reverseTransformation=_reverseTransformation;
@property(readonly, copy, nonatomic) CDUnknownBlockType forwardTransformation; // @synthesize forwardTransformation=_forwardTransformation;
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000000f9e
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000000f2c
- (id)initWithForwardTransformation:(CDUnknownBlockType)arg1 reverseTransformation:(CDUnknownBlockType)arg2;	// IMP=0x0000000000000e65

@end
