//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLLinkedFunctions.h"

__attribute__((visibility("hidden")))
@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions
{
    struct MTLLinkedFunctionsPrivate _private;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000f835c
+ (id)alloc;	// IMP=0x00600000000f8352
- (id)description;	// IMP=0x00000000000f8b19
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000f8962
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f8897
- (unsigned long long)hash;	// IMP=0x00000000000f8662
- (_Bool)isEmpty;	// IMP=0x00000000000f8631
- (void)setGroups:(id)arg1;	// IMP=0x00000000000f85ea
- (id)groups;	// IMP=0x00000000000f85d8
- (void)setBinaryFunctions:(id)arg1;	// IMP=0x00000000000f8591
- (id)binaryFunctions;	// IMP=0x00000000000f857f
- (void)setPrivateFunctions:(id)arg1;	// IMP=0x00000000000f8538
- (id)privateFunctions;	// IMP=0x00000000000f8526
- (void)setFunctions:(id)arg1;	// IMP=0x00000000000f84e1
- (id)functions;	// IMP=0x00000000000f84d0
- (void)dealloc;	// IMP=0x00000000000f846a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f83c7

@end

