//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityAudit/NSObject-Protocol.h>

@class AXAuditIssue, AXAuditer, NSArray, NSDictionary, NSString;

@protocol AXAuditerDelegate <NSObject>
- (NSDictionary *)fetchScreenshot;
- (void)auditer:(AXAuditer *)arg1 didCompleteWithResults:(NSArray *)arg2;
- (void)auditer:(AXAuditer *)arg1 didEncounterIssue:(AXAuditIssue *)arg2;
- (void)auditer:(AXAuditer *)arg1 didAppendLogWithMessage:(NSString *)arg2;
@end

