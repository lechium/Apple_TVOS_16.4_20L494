//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSFormatter, NSString, NSURL, TSKSettingItem;

@interface TVSettingsNetworkViewController : TSKViewController
{
    NSURL *_lastDeepLinkURL;	// 8 = 0x8
    TSKSettingItem *_wifiSignalStrengthItem;	// 16 = 0x10
    TSKSettingItem *_secureWiFiItem;	// 24 = 0x18
    NSFormatter *_emptyValueFormatter;	// 32 = 0x20
    NSFormatter *_dnsValueFormatter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003af4e
@property(retain, nonatomic) NSFormatter *dnsValueFormatter; // @synthesize dnsValueFormatter=_dnsValueFormatter;
@property(retain, nonatomic) NSFormatter *emptyValueFormatter; // @synthesize emptyValueFormatter=_emptyValueFormatter;
@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (void)_handleToggleHiddenRecognizer:(id)arg1;	// IMP=0x001000000003ae63
- (void)_updateWiFiItem:(id)arg1 value:(id)arg2;	// IMP=0x001000000003acb6
- (void)_updateEthernetItem:(id)arg1 value:(id)arg2;	// IMP=0x001000000003ab6f
- (void)networkUpdated:(id)arg1;	// IMP=0x001000000003a9e4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003a838
- (void)presentActionForDisplayedDeepLinkURL;	// IMP=0x001000000003a7b4
- (void)loadView;	// IMP=0x001000000003a704
- (id)loadSettingGroups;	// IMP=0x0010000000039049
- (void)viewDidLoad;	// IMP=0x0010000000038f7e
- (void)dealloc;	// IMP=0x0010000000038f09
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000038e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

