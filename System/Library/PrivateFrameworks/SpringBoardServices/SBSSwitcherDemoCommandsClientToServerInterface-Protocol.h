//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol __NSString__;

@protocol SBSSwitcherDemoCommandsClientToServerInterface <NSObject>
- (_Bool)setShouldDisableSwitcherModelUpdates:(NSNumber *)arg1;
- (_Bool)updateHiddenApplicationBundleIDs:(NSArray<__NSString__> *)arg1;
- (_Bool)loadStashedSwitcherModelFromPath:(NSString *)arg1;
- (_Bool)stashSwitcherModelToPath:(NSString *)arg1;
@end

