//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVPropPatchTask, NSArray, NSError;

@protocol CoreDAVPropPatchTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)propPatchTask:(CoreDAVPropPatchTask *)arg1 parsedResponses:(NSArray *)arg2 error:(NSError *)arg3;
@end

