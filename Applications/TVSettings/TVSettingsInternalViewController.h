//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSMutableSet;

@interface TVSettingsInternalViewController : TSKViewController
{
    NSMutableSet *_loadedBundleNames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000024af3
@property(retain) NSMutableSet *loadedBundleNames; // @synthesize loadedBundleNames=_loadedBundleNames;
- (id)_loadSettingGroupWithBundlesInDirectory:(id)arg1;	// IMP=0x00100000000244fe
- (id)loadSettingGroups;	// IMP=0x0010000000024409

@end

