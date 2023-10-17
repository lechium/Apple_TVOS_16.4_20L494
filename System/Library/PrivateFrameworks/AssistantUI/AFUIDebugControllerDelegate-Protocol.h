//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, SAUIAddViews;
@protocol AFUIDebugControlling;

@protocol AFUIDebugControllerDelegate
- (NSArray *)debugControllerRequestsBugReportKeywordIdentifiers:(id <AFUIDebugControlling>)arg1;
- (NSString *)debugControllerRequestsBugReportPrefixForTitle:(id <AFUIDebugControlling>)arg1;
- (void)debugController:(id <AFUIDebugControlling>)arg1 openURL:(NSURL *)arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 requestsScreenShotWithCompletion:(void (^)(UIImage *))arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 utterances:(NSArray *)arg2 completion:(void (^)(AFUITTRReport *))arg3;
- (void)debugController:(id <AFUIDebugControlling>)arg1 requestsPermissionToScreenshot:(void (^)(_Bool))arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 stateDidChangeWithAddViews:(SAUIAddViews *)arg2;
@end

