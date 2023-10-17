//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _PFRequestExecutor : NSObject
{
    NSObject<OS_dispatch_group> *_requestGroup;	// 8 = 0x8
}

- (void)requestFinished;	// IMP=0x0000000000145ebe
- (_Bool)wait;	// IMP=0x0000000000145e8b
- (_Bool)executeRequest:(id)arg1 onMirroringDelegate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000145e2b
- (_Bool)executeRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000145a1e
- (void)dealloc;	// IMP=0x00000000001459e4
- (id)init;	// IMP=0x000000000014599f

@end

