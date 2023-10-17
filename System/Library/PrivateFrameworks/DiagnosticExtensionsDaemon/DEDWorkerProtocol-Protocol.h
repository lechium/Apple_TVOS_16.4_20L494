//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@protocol DEDWorkerProtocol <NSObject>
- (void)loadTextDataForExtensions:(NSSet *)arg1 localization:(NSString *)arg2 sessionID:(NSString *)arg3;
- (void)addSessionData:(NSData *)arg1 withFilename:(NSString *)arg2 forSession:(NSString *)arg3;
- (void)unscheduleNotificationForSession:(NSString *)arg1;
- (void)scheduleNotificationForSession:(NSString *)arg1;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)getSessionStateWithSession:(NSString *)arg1;
- (void)syncSessionStatusWithSession:(NSString *)arg1;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 deferRunUntil:(NSDate *)arg3 session:(NSString *)arg4;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
- (long long)transportType;
@end

