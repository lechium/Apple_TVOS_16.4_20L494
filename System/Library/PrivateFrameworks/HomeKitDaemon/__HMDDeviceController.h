//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMDDeviceController.h"

@class HMDAccountRegistry;

__attribute__((visibility("hidden")))
@interface __HMDDeviceController : HMDDeviceController
{
    HMDAccountRegistry *_accountRegistry;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000072009d
@property(readonly) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)__handleAddedDevice:(id)arg1;	// IMP=0x000000000071fda1
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x000000000071fb84
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000071f905
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000071f3e6
- (void)dealloc;	// IMP=0x000000000071f349
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x000000000071f19b
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000071f11a
- (id)init;	// IMP=0x000000000071f072

@end

