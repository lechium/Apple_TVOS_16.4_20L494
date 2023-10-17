//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TSKMappingFormatter;

@interface TVSettingsAppearanceFacade : NSObject
{
    long long _systemAppearance;	// 8 = 0x8
    _Bool _systemAppearanceNeedsUpdate;	// 16 = 0x10
    TSKMappingFormatter *_userInterfaceStyleFormatter;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000014d4f
- (void).cxx_destruct;	// IMP=0x00200000000152b3
@property(retain, nonatomic) TSKMappingFormatter *userInterfaceStyleFormatter; // @synthesize userInterfaceStyleFormatter=_userInterfaceStyleFormatter;
@property(readonly, nonatomic) NSArray *appearanceOptions;
- (void)_updateSystemAppearance;	// IMP=0x0010000000014fdc
- (void)invalidateSystemAppearance;	// IMP=0x0010000000014fd2
@property(nonatomic) long long systemAppearance;
- (id)init;	// IMP=0x0010000000014da4

@end
