//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _ACComponentWrapper : NSObject
{
    struct shared_ptr<APComponent> mComponent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b2a4d
- (id).cxx_construct;	// IMP=0x00000000000b362b
- (void).cxx_destruct;	// IMP=0x00000000000b361d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b2c97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b2a74
- (id)initWithComponent:(void *)arg1;	// IMP=0x00000000000b2a55

@end

