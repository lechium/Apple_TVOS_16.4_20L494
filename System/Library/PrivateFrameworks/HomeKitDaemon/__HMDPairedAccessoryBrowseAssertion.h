//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFAssertion.h>

@class HMDAccessoryBrowser;

__attribute__((visibility("hidden")))
@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion
{
    HMDAccessoryBrowser *_accessoryBrowser;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009a1e82
@property(readonly) __weak HMDAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
- (void)invalidate;	// IMP=0x00000000009a1dee
- (id)initWithAccessoryBrowser:(id)arg1 reason:(id)arg2;	// IMP=0x00000000009a1cbb
- (id)initWithName:(id)arg1;	// IMP=0x00000000009a1c05

@end

