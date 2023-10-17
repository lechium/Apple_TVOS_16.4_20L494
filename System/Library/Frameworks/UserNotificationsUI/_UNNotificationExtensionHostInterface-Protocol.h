//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIColor, UNNotificationResponse;

@protocol _UNNotificationExtensionHostInterface
- (void)_extensionDidUpdateNotificationActions:(NSArray *)arg1;
- (void)_extensionDidUpdateTitle:(NSString *)arg1;
- (void)_extensionRequestsDismiss;
- (void)_extensionRequestsDefaultAction;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionSetPlayPauseMediaButtonColor:(UIColor *)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect)arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionDidCompleteNotificationResponse:(UNNotificationResponse *)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionWantsToBecomeFirstResponder:(_Bool)arg1;
- (void)_extensionWantsToReceiveActionResponses:(_Bool)arg1;
@end

