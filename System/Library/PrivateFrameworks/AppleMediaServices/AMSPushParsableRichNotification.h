//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableRichNotification : NSObject
{
}

+ (_Bool)shouldSkipAccountCheck;	// IMP=0x00100000002f7ac1
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3;	// IMP=0x00100000002f7abb
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x00100000002f7750

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

