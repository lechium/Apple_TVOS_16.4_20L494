//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIViewBlockBasedCAAction : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000117cf1d
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000117ce0b
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000117cd98
- (id)initWithEmptyBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000117ccf8

@end

