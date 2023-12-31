//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCKPhotosSharedLibraryOperation : NSObject
{
}

+ (id)sendExitStatusFeedbackWithOperationID:(id)arg1 shareID:(id)arg2 status:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00200000001b5740
+ (id)sendExitMoveBatchFeedbackWithMoveBatchOperationID:(id)arg1 moveBatchID:(id)arg2 exitZoneID:(id)arg3 feedbackItems:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b5500
+ (id)exitSharedLibraryOperationWithZoneID:(id)arg1 retentionPolicy:(long long)arg2 exitType:(long long)arg3 exitSource:(long long)arg4 stopAt:(long long)arg5 participantUserIDsToRemove:(id)arg6 participantIDsToRemove:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000001b4ff0
+ (id)moveBatchSharedLibraryOperationWithZoneID:(id)arg1 batchSize:(int)arg2 operationID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b4080
+ (id)getNextBatchToMoveOperationWithZoneID:(id)arg1 batchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b39e0
+ (id)silentMoverServerRampOperationWithOperationID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b32b0
- (id)init;	// IMP=0x00400000001b5880

@end

