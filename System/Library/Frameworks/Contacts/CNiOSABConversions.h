//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABConversions : NSObject
{
}

+ (id)arrayByMappingTransform:(CDUnknownBlockType)arg1 onCFArray:(struct __CFArray *)arg2;	// IMP=0x00800000000b2c49
+ (void)updateContact:(id)arg1 fromABPerson:(void *)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id *)arg4;	// IMP=0x00800000000b16ee
+ (id)contactFromABPerson:(void *)arg1 uniqueKeysToConvert:(id)arg2 mutable:(_Bool)arg3;	// IMP=0x00800000000b10a8
+ (void)initialize;	// IMP=0x00800000000b0ff9
+ (id)os_log;	// IMP=0x00800000000b0f9d
+ (id)numberFromIntegerABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000004bfb4
+ (id)dataFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000004bf9b
+ (id)dateFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000004bf33
+ (id)stringFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000004bef2

@end

