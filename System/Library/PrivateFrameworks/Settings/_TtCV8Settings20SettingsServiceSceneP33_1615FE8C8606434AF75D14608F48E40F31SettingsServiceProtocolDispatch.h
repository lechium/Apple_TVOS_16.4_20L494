//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;
@protocol _TtP8Settings27SettingsHostServiceProvider_;

@interface _TtCV8Settings20SettingsServiceSceneP33_1615FE8C8606434AF75D14608F48E40F31SettingsServiceProtocolDispatch : _TtCs12_SwiftObject
{
    MISSING_TYPE *target;	// 16 = 0x10
}

- (void)filterSearchAnchorsForSidebarItem:(id)arg1 suggestedAnchors:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f000
- (void)isAvailable:(CDUnknownBlockType)arg1;	// IMP=0x000000000001efe0
- (void)getSidebarSections:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ef60
- (void)getSidebarItems:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ef40
- (void)openURL:(id)arg1;	// IMP=0x000000000001eef0
@property(nonatomic, retain) id <_TtP8Settings27SettingsHostServiceProvider_> serviceHost;

@end

