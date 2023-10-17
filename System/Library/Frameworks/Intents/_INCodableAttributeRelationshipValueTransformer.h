//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class INCodableAttribute;

__attribute__((visibility("hidden")))
@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer
{
    INCodableAttribute *_codableAttribute;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000fd6b8
@property(readonly, nonatomic) __weak INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
- (id)transformedValue:(id)arg1;	// IMP=0x00000000000fd4b9
- (id)initWithCodableAttribute:(id)arg1;	// IMP=0x00000000000fd452

@end

