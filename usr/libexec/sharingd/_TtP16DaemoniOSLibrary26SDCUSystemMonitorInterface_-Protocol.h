//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OS_dispatch_queue;

@protocol _TtP16DaemoniOSLibrary26SDCUSystemMonitorInterface_
- (void)activateWithCompletion:(void (^)(void))arg1;
@property(nonatomic, copy) CDUnknownBlockType powerUnlimitedChangedHandler;
@property(nonatomic, copy) CDUnknownBlockType firstUnlockHandler;
@property(nonatomic, copy) CDUnknownBlockType meDeviceChangedHandler;
@property(nonatomic, readonly) NSString *meDeviceIDSDeviceID;
@property(nonatomic, readonly) _Bool powerUnlimited;
@property(nonatomic, readonly) _Bool firstUnlocked;
@property(nonatomic, retain) OS_dispatch_queue *dispatchQueue;
@end

