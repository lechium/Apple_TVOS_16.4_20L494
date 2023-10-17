//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASCLazy : NSObject
{
    struct os_unfair_lock_s _loadingGuard;	// 8 = 0x8
    id _objectIfLoaded;	// 16 = 0x10
    CDUnknownBlockType _factory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000191e5
@property(readonly, nonatomic) struct os_unfair_lock_s loadingGuard; // @synthesize loadingGuard=_loadingGuard;
@property(readonly, copy, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property(retain) id objectIfLoaded; // @synthesize objectIfLoaded=_objectIfLoaded;
- (id)description;	// IMP=0x0000000000019111
@property(readonly) id object;
- (id)initWithFactory:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018fae

@end

