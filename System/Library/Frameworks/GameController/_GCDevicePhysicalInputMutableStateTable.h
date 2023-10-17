//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputMutableStateTable : NSObject
{
    unsigned short _magic;	// 8 = 0x8
    NSPointerArray *_primitiveState;	// 16 = 0x10
    NSPointerArray *_objectPolicyState;	// 24 = 0x18
    NSPointerArray *_objectState;	// 32 = 0x20
}

@property(readonly) unsigned short magic; // @synthesize magic=_magic;
- (void)setObjectValue:(id)arg1 atIndex:(unsigned int)arg2 policy:(unsigned long long)arg3;	// IMP=0x000000000002b510
- (id)objectValueAtIndex:(unsigned int)arg1;	// IMP=0x000000000002b4af
- (void)setPrimitiveValue:(unsigned long long)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000002b3e6
- (unsigned long long)primitiveValueAtIndex:(unsigned int)arg1;	// IMP=0x000000000002b385
@property(readonly) unsigned int objectSlotCount;
@property(readonly) unsigned int primitiveSlotCount;
- (id)copy;	// IMP=0x000000000002b2fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b1ce
- (void)dealloc;	// IMP=0x000000000002b131
- (id)init;	// IMP=0x000000000002b115

@end

