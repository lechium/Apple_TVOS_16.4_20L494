//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _CPLCloudKitOperationSession;

@interface CPLCloudKitOperationCounter : NSObject
{
    NSMutableArray *_sessions;	// 8 = 0x8
    _CPLCloudKitOperationSession *_currentSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000013517b
- (id)status;	// IMP=0x0010000000134e4b
- (id)statusObject;	// IMP=0x0010000000134b50
- (void)endTask:(id)arg1 withOperationClasses:(id)arg2 operationsAllowingCellular:(id)arg3;	// IMP=0x00100000001349a8
- (void)beginTask:(id)arg1;	// IMP=0x001000000013474e
- (id)init;	// IMP=0x00100000001346f8

@end

