//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDApplicationInfo;

__attribute__((visibility("hidden")))
@interface __HMDExtensionApplicationInfo
{
    HMDApplicationInfo *_hostApplicationInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005863e0
- (id)hostApplicationInfo;	// IMP=0x00000000005863ca
- (_Bool)isInstalled;	// IMP=0x000000000058637d
- (id)vendorIdentifier;	// IMP=0x00000000005862f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005861d4
- (id)attributeDescriptions;	// IMP=0x00000000005860ad
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000585f90

@end

