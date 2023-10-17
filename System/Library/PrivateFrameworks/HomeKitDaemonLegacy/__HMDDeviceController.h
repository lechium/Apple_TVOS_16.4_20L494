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

- (void).cxx_destruct;	// IMP=0x000000000065bb03
@property(readonly) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)__handleAddedDevice:(id)arg1;	// IMP=0x000000000065b807
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x000000000065b5ea
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000065b36b
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000065ae06
- (void)dealloc;	// IMP=0x000000000065ad69
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x000000000065abbb
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000065ab3a
- (id)init;	// IMP=0x000000000065aa92

@end
