//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSUUID;
@protocol SHWorkerDelegate;

@protocol SHWorker <NSObject>
@property(readonly, nonatomic) double timeRequiredToPerformWork;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate;
@property(readonly, nonatomic) NSUUID *workerID;
- (void)stop;
@end

