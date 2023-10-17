//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HPSSetting, HPSSettingsCoordinator, NSString, NSUUID;

@protocol HPSSettingsCoordinatorObserver
@property(nonatomic, readonly) NSUUID *observerID;
- (void)coordinator:(HPSSettingsCoordinator *)arg1 didReceiveUpdateForKeyPath:(NSString *)arg2 setting:(HPSSetting *)arg3;
@end

