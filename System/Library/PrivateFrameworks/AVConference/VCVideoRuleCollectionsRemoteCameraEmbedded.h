//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsRemoteCameraEmbedded
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000004b430
- (_Bool)initSupportedPayloads;	// IMP=0x000000000004b438
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000004b342

@end

