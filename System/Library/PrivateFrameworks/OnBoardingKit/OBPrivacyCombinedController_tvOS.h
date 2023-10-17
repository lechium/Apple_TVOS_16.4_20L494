//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "OBPrivacyCombinedController.h"

@class NSArray, OBPrivacyCombinedView;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedController_tvOS : OBPrivacyCombinedController
{
    NSArray *_bundles;	// 8 = 0x8
    NSArray *_privacyFlowGroups;	// 16 = 0x10
    OBPrivacyCombinedView *_combinedView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f963
@property(retain, nonatomic) OBPrivacyCombinedView *combinedView; // @synthesize combinedView=_combinedView;
@property(retain, nonatomic) NSArray *privacyFlowGroups; // @synthesize privacyFlowGroups=_privacyFlowGroups;
@property(readonly, nonatomic) NSArray *bundles; // @synthesize bundles=_bundles;
- (void)_showPrivacyFlow:(id)arg1;	// IMP=0x000000000000f811
- (void)viewDidLoad;	// IMP=0x000000000000ed57
- (void)loadView;	// IMP=0x000000000000ed01
- (id)initWithBundles:(id)arg1;	// IMP=0x000000000000ec58

@end

