//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMomentsMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000029cb19
- (id)getMomentsImageTypes;	// IMP=0x000000000029cb50
- (id)getMomentsVideoCodecs;	// IMP=0x000000000029cb2c
- (unsigned char)getMomentsCapabilities;	// IMP=0x000000000029cb21
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000029cab2

@end
