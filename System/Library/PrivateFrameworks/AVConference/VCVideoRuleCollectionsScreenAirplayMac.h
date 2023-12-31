//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenAirplayMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000015fcbb
- (unsigned int)tilesPerFrame:(int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x000000000015fff3
- (_Bool)setupH264Rules;	// IMP=0x000000000015fdf0
- (_Bool)setupRules;	// IMP=0x000000000015fdde
- (void)initSupportedPayloads;	// IMP=0x000000000015fdc7
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000015fcc3

@end

