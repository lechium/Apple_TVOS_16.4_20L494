//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPortCoder.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSConcretePortCoder : NSPortCoder
{
    NSSet *allowlist;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000004b325f
- (_Bool)_classAllowed:(Class)arg1;	// IMP=0x00000000004b31d4
- (void)_setAllowList:(id)arg1;	// IMP=0x00000000004b319c

@end

