//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol IPLocalizationSwitcherProtocol
- (void)preferredLanguagesForBundleIDs:(NSArray *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)preferredLanguagesForBundleID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)notifyPreferredLanguageChangedForBundleID:(NSString *)arg1;
- (void)setPreferredLanguage:(NSString *)arg1 forBundleID:(NSString *)arg2 andRelaunchWithReply:(void (^)(NSError *))arg3;
@end

