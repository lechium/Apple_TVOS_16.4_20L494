//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSItemProviderTypeCoercion : NSObject
{
    id _value;	// 8 = 0x8
    Class _targetClass;	// 16 = 0x10
}

+ (id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2;	// IMP=0x00600000004d2bc3
@property(copy) Class targetClass; // @synthesize targetClass=_targetClass;
@property(retain) id value; // @synthesize value=_value;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d2f32
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d2ef5
- (id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d2ed4
- (id)coerceValueError:(id *)arg1;	// IMP=0x00000000004d2dbf
- (_Bool)shouldCoerceForCoding;	// IMP=0x00000000004d2d10
- (void)dealloc;	// IMP=0x00000000004d2ca3

@end
