//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueContainerClass : NSObject
{
    Class _originalClass;	// 8 = 0x8
    CDUnknownFunctionPointerType _cachedObservationInfoImplementation;	// 16 = 0x10
    CDUnknownFunctionPointerType _cachedSetObservationInfoImplementation;	// 24 = 0x18
    _Bool _cachedSetObservationInfoTakesAnObject;	// 32 = 0x20
    struct {
        Class _field1;
        Class _field2;
        struct __CFSet *_field3;
        struct __CFDictionary *_field4;
        struct os_unfair_recursive_lock_s _field5;
        _Bool _field6;
    } *_notifyingInfo;	// 40 = 0x28
}

- (id)description;	// IMP=0x0000000000455eb8
- (id)initWithOriginalClass:(Class)arg1;	// IMP=0x0000000000455de2

@end

